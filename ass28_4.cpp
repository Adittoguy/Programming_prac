#include<iostream>
using namespace std;

class base
{
    public:
        int i;
        float f;

        virtual void fun()
        {
            cout<<"inside base fun\n";
        }

        virtual void gun()
        {
            cout<<"inside base gun\n";
        }

        virtual void sun()
        {
            cout<<"inside base sun\n";
        }

        void run()
        {
            cout<<"inside base run\n";
        }
};

class derived : public base
{
    public:
        int i;
        double d;

        virtual void fun()
        {
            cout<<"inside derived fun\n";
        }

        virtual void gun()
        {
            cout<<"inside derived gun\n";
        }

        void sun()
        {
            cout<<"inside derived sun\n";
        }

        virtual void run()
        {
            cout<<"inside derived run\n";
        }
};

int main()
{
    derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    // base bobj;
    // bobj.fun();
    // bobj.gun();
    // bobj.sun();
    // bobj.run();

    return 0;
}