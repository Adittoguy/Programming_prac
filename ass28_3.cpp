#include<iostream>
using namespace std;

class base
{
    public:
        int i = 10;
        float f;

        void fun()
        {
            cout<<"inside base fun\n";
        }

        virtual void gun()
        {
            cout<<"inside base gun\n";
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

        void gun()
        {
            cout<<"inside derived gun\n";
        }

        virtual void sun()
        {
            cout<<"inside derived sun\n";
        }
};

int main()
{
    derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();

    // cout<<"value of i is : "<<dobj.i<<"\n";
    // cout<<"address of i is : "<<&(dobj.i)<<"\n";

    // base bobj;
    // cout<<"value of i is : "<<bobj.i<<"\n";
    // cout<<"address of i is : "<<&(bobj.i)<<"\n";

    // bobj.fun();
    // bobj.gun();
    //bobj.sun();

    return 0;
}