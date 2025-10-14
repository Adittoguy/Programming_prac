#include <iostream>

using namespace std;

class Account
{
    public:
        double AccNumber = 0;
        //string AccHolder[15];
        double Balance = 0;
        int Noyears = 0;
        long int Adhar = 0;
        double SInterest = 0;

        virtual void Interest() = 0;
        // virtual void SAcc() = 0;
        // virtual void CAcc() = 0;

        void enterinfo()
        {
            cout<<"Enter your Account number: \n";
            cin>>AccNumber;

            // cout<<"Enter your Name: \n";
            // cin>>AccHolder;

            cout<<"Enter your Balance: \n";
            cin>>Balance;

            cout<<"Enter Number of Years\n";
            cin>>Noyears;
        }

        void kyc()
        {
            cout<<"Enter your Adhar: \n";
            cin>>Adhar;

            if (Adhar>1)
            {
                cout<<"Valid Adhar\n";

            }
            else
            {
                cout<<"Invalid\n";
            }
        }

        void displayinfo()
        {
            cout<<"Your Account Number : "<<AccNumber<<"\n";
            cout<<"Your Balance : "<<Balance<<"\n";\
            cout<<"Adhar:"<<Adhar<<"\n";
            cout<<"you have earned "<<SInterest<<" interest on savings account\n";
            cout<<"you earn 0 interest on Current account\n";
        }       
};

class Saving : public Account
{
    public:

        // cout<<"Your Savings Account\n";

        void Interest()
        {
            SInterest = (Balance * 6.5 * Noyears) / 100;
        }
};


class Current : public Account
{
    public:

        // cout<<"Your Current Account\n";

        void Interest()
        {
            //cout<<"you earn 0 interest on Current account\n";
        }
};


int main()
{
    // Account * Ap = new Account();

    // Ap -> enterinfo();
    // Ap -> kyc();
    // Ap -> displayinfo();

    Account * Sp = new Saving();
    // Sp -> SAcc();
    Sp -> enterinfo();
    Sp -> Interest();
    Sp -> kyc();
    Sp -> displayinfo();

    Account * Cp = new Current();
    // Cp->CAcc();
    Cp -> enterinfo();
    Cp-> Interest();
    Cp -> kyc();
    Cp -> displayinfo();



    return 0;
}