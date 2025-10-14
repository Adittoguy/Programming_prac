#include<iostream>
using namespace std;

class base1
{
    public:
        int i;
        float f;

        void gun()
        {
            cout<<"inside base1 gun\n";
        }
};

class base2
{
    public:
        int j;
        float g;

        void fun()
        {
            cout<<"inside base2 fun\n";
        }
};

class derived: public base1,base2
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
};

int main()
{
    derived dobj;

    dobj.gun();
    dobj.fun();
    dobj.sun();

    return 0;
}