#include<iostream>
using namespace std;

class kid
{
    int age;
    public:
        kid(int age)
        {
            this-> age = age;
        }
        void intro()
        {
            cout <<"Hi, I am "<< this->age << " years old \n";
        }
};

int main()
{
    kid tom(5);
    tom.intro(); 
}