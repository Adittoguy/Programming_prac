#include <iostream>
using namespace std;

class base 
{
    public:
        int i;
        float f;
        
        void gun()
        {
            cout<<"Inside base fun\n";
        }

        virtual void sun()
        {
            cout<<"Inside base sun\n";
        }
};

class derived:public base
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
    dobj.sun();
    dobj.gun();

    cout<<&(dobj)<<"\n";
    cout<<&(dobj.base::i)<<"\n";
    cout<<&(dobj.base::f)<<"\n";
    cout<<&(dobj.i)<<"\n";
    cout<<&(dobj.d)<<"\n";
    cout<<&(dobj)+1<<"\n";

    return 0;
}