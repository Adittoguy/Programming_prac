#include <iostream>
using namespace std;

class Demo
{
    public:
        int iNo1;
        int iNo2;
        static int x;

        Demo()
        {
            this->iNo1 = 0;
            this->iNo2 = 0;
        }

        Demo(int a, int b)
        {
            this->iNo1 = a;
            this->iNo2 = b;
        }

        void Fun()
        {
            cout<<"Inside Fun\n";
            cout<<"Value of iNo1 is :"<<this->iNo1<<"\n";
            cout<<"Value of iNo2 is :"<<this->iNo2<<"\n";
            cout<<"Value of x is :"<<x<<"\n";
        }

        static void Gun()
        {
            cout<<"Inside Gun\n";
            //cout<<i<<"\n";
            //cout<<j<<"\n";
            cout<<x<<"\n";
        }

};

int Demo::x=11;

int main()
{
    Demo::Gun();
    cout<<"Value of x is :"<<Demo::x<<"\n";

    Demo obj(10,20);

    obj.Fun();
    obj.Gun();

    cout<<"size of obj is : "<<sizeof(obj)<<"\n";

    return 0;
}