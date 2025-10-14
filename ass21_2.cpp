#include <iostream>
using namespace std;

class Demo
{
    public:
        // Demo()
        // {
        //     int no = 0;
        //     float f= 0;
        // }
        void fun(int*p)
        {
            cout<<"First Defination\n";
        }
        void fun (float*p)
        {
            cout<<"Second Defination\n";
        }
        void fun(int no)
        {
            cout<<"third Defination\n";
        }
};

int main()
{
    int no = 11;
    float f = 3.14;

    Demo obj;

    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);
    
    return 0;
}