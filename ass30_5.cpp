#include<iostream>
using namespace std;

class base 
{
    public:
        int i;
        float f;

        virtual void gun() = 0;

        virtual void sun() = 0;

        virtual void run()
        {
            cout<<"base run\n";
        }
};

class derived : public base
{
    public:
        int i;
        double d;

        void sun()
        {
            cout<<"derived sun\n";
        }

        void fun()
        {
            cout<<"derived fun\n";
        }

        void gun()
        {
            cout<<"derived gun\n";
        }

        virtual void mun()
        {
            cout<<"derived mun\n";
        }
};

int main()
{
    base *bp = NULL;
    derived dobj;

    bp = &dobj;

    // bp -> fun();
    bp -> gun();
    bp -> sun();
    bp -> run();
    // bp -> mun();

    return 0;
}