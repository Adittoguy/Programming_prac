#include <iostream>
using namespace std;

class person
{
    char name [30];
    int age;

    public:
        void getdata(void)
        {
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
        }
        void display(void)
        {
            cout<<"Name is: " <<name<<"\n";
            cout<<"Age is : " <<age<<"\n";
        }
};

// void person::void getdata(void)
// {
//     cout<<"Name : \n";
//     cin>>name;
//     cout<<"Age : \n";
//     cin>>age;
// }

// void person::void display(void)
// {
//     cout<< name;
//     cout<< age;
// }

int main()
{
    person p;

    p.getdata();
    p.display();

    return 0;
}