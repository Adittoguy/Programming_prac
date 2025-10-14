#include <iostream>
using namespace std;

class base
{
    private:
        virtual void fun()
        {
            cout<<"inside base p fun\n";
        }

    public:
        int i,j;

        virtual void gun()
        {
            cout<<"inside base gun\n";
            fun();
        }
};

class derived: public base
{
    public:
        int x;

        void fun()
        {
            cout<<"inside derived fun\n";
        }

        // void gun()
        // {
        //     cout<< "inside derived gun\n";
        // }
};

int main()
{
    base *bp = new derived();

    //bp->fun();
    bp->gun();      // inside base gun and derived fun

    return 0;
}