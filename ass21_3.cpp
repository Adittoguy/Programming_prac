#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        static int k;

        Base()
        {
            i = 10;
            j = 20;
        }

        void fun()
        {
            cout<<"Base fun\n";
        }
};

int Base :: k = 11;

class Derived : public Base
{
    public:
        int x,y;

        Derived()
        {
            x = 50;
            y = 60;
        }

        void gun()
        {
            cout<<"Derived Gun\n";
        }
};

int main()
{
    Base bobj();
    Derived dobj();

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    cout<<"Value is: "<<bobj.i<<"\n";
    cout<<"Value is: "<<bobj.j<<"\n";
    cout<<"Value is: "<<dobj.i<<"\n";
    cout<<"Value is: "<<dobj.j<<"\n";
    cout<<"Value is: "<<bobj.k<<"\n";
    cout<<"Value is: "<<dobj.k<<"\n";
    //cout<<bobj.x;

    bobj.fun();
    dobj.fun();
    dobj.gun();

    return 0;
}