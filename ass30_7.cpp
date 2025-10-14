#include <iostream>
using namespace std;

class base1
{
    public:
        int i;
        float f;

        virtual void gun() = 0;
        virtual void sun() = 0;

        virtual void run()
        {
            cout << "inside base1 run\n";
        }
};

class base2
{
    public:
        int j;
        float g;

        virtual void mun() = 0;
        virtual void fun() = 0;

        void fun()
        {
            cout<<"inside base2 fun\n";
        }
};

class derived : public base1, base2
{
    public:
        int i;
        double d;

        void sun()
        {
            cout<<"inside derived sun\n";
        }

        void fun()
        {
            cout<<"inside derived fun\n";
        }

        void gun()
        {
            cout<<"inside derived gun\n";
        }

        void mun()
        {
            cout<<"inside derived mun\n";
        }
};

int main()
{
    derived dobj;

    return 0;
}

/*

                 ┌──────────────────────────────────────────────────┐
   dobj (derived)│                                                  │
   0x1000 ──────▶│ [vptr_base1] ─────────────┐                      │
                 │ base1::i                  │                      │
                 │ base1::f                  │                      │
                 ├───────────────────────────┤                      │
                 │ [vptr_base2] ─────────────┐                      │
                 │ base2::j                  │                      │
                 │ base2::g                  │                      │
                 ├───────────────────────────┤                      │
                 │ derived::i                │                      │
                 │ derived::d                │                      │
                 └───────────────────────────┘                      │
                               │                     │
                               │                     │
                     ┌─────────┘                     └─────────┐
                     ▼                                           ▼
      base1_vtable_for_derived                     base2_vtable_for_derived
      +--------------------------------+           +--------------------------------+
      | [0] → derived::gun()           |           | [0] → derived::mun()           |
      | [1] → derived::sun()           |           | [1] → derived::fun()           |
      | [2] → base1::run()             |           +--------------------------------+
      +--------------------------------+


*/