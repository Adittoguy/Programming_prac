// class banavla 
// abstraction use kela (public)
// polymorphism and encapsulation 

#include<iostream>

class demo
{
    public:
        int iNo1;
        int iNo2;

        demo()
        {
            iNo1 = 0;
            iNo2 = 0;
        }
        demo(int a, int b)
        {
            iNo1 = a;
            iNo2 = b;
        }
        ~demo()
        {
            //logic
        }
};
int main()
{
    demo obj1;
    demo obj2(11 ,21);
    return 0;
}