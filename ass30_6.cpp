#include <iostream>
using namespace std;

class base
{
    public:
        int i;
        float f;

        void fun()
        {
            cout<<"base fun\n";
        }

        virtual void gun()
        {
            cout<<"base gun\n";
        }
};

class derived:public base
{
    public:
        int i;
        double d;

        virtual void fun()
        {
            cout<<"derived fun\n";
        }

        void gun()
        {
            cout<<"derived gun\n";
        }

        virtual void sun()
        {
            cout<<"derived sun\n";
        }
};

int main()
{
    base * bp = new derived();
    bp->gun();

    return 0;
}


/*

              ┌─────────────────────────────┐
              │        base class           │
              │ int i                       │
              │ float f                     │
              │ virtual void gun()          │
              │ void fun()                  │
              └──────────────┬──────────────┘
                             │
                             ▼
              ┌─────────────────────────────┐
              │        derived class        │
              │ int i                       │
              │ double d                    │
              │ virtual void fun()          │  (non-override of base::fun)
              │ void gun()                  │  (override)
              │ virtual void sun()          │
              └──────────────┬──────────────┘
                             │
                             ▼
          derived object in heap (bp →)
          ┌─────────────────────────────┐
    0x100 │ [vptr] → derived_vtable ----┼─┐
    0x108 │ base::i                     │ │
    0x10C │ base::f                     │ │
    0x110 │ derived::i                  │ │
    0x118 │ derived::d                  │ │
          └─────────────────────────────┘ │
                                           │
          derived_vtable:                  │
          +-------------------------------+│
          | [0] → derived::gun()          |│
          | [1] → derived::sun()          |│
          +-------------------------------+│
                                           │
                                           ▼
                        bp->gun() → jumps to derived::gun()
                        bp->fun() → calls base::fun() directly


*/