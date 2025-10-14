#include<iostream>
using namespace std;

class base 
{
    public:
        int i;
        float f;
        double d;

        void fun()
        {
            cout<<"inside base fun\n";
        }

        void gun()
        {
            cout<<"inside base gun\n";
        }
};

class derived:public base
{
    public:
        int i;
        double d;
        
        void sun()
        {
            cout<<"inside derievd sun\n";
        }

        void fun()
        {
            cout<<"inside derived fun\n";
        }
};

int main()
{
    base bobj;
    derived dobj;
    
    bobj.fun();
    bobj.gun();
    //bobj.sun();   can't access becoz sun is function from derived class

    dobj.sun();
    dobj.fun();
    dobj.gun();

    base * p = &dobj;
    //p -> fun();

    return 0;
}