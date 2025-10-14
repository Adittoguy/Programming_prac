#include<iostream>
using namespace std;

class counter
{
    private:
        static int count;
        int count1 = 21;
    
    public:
        static void showcount()
        {
            cout << "Count = "<<count<<"\n";
            // cout << "Count1 = "<<count1<<"\n";
        }
};

int counter :: count = 11;

void fun()
{
    static counter c1;
    cout<<"using static obj: \n";
}

int main()
{
    fun();
    fun();
    
    counter c;

    counter::showcount();
}
