#include <iostream>

using namespace std;

class Base
{
    public:
        int i , j;

        void fun()
        {
            cout<<"Inside Base fun\n";
        }

        void gun()
        {
            cout<<"Inside  Base gun\n";
        }
        virtual void sun()
        {
            cout<<"Inside Base sun\n";
        }
        virtual void bun()
        {
            cout<<"Inside Base bun\n";
        }

};

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }

        void sun()
        {
            cout<<"Inside Derived sun\n";
        }

        void run()
        {
            cout<<"Inside Derived run\n";
        }

        virtual void mun()
        {
            cout<<"Inside Derived mun\n";
        }
};

int main()
{
    Base * bp1 = new Base();
    Base * bp2 = new Derived();

    Derived * dp1 = new Derived();
    //Derived * dp2 = new Base();           // downcasting

    cout<< sizeof(Base)<<"\n";
    cout<< sizeof(Derived)<<"\n";

    bp2 -> fun();
    bp2 -> gun();
    bp2 -> sun();
    //bp2 -> run();                        // not a member of base class
    //bp2 -> mun();                        // not a member of base class
    bp2 -> bun();


    return 0; 
}