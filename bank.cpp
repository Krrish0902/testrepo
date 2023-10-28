#include <iostream>
using namespace std;
class bank
{
    private:int amt,bal,t,mb;
    public:void beq();
           void deposit();
           void withdrawal();
           void put();
};
void bank::put()
{
    cout<<"enter the type account type\n1.savings\n2.current";
    cin>>t;
     switch(t)
    {
    case 1:
        mb=1000;
    case 2:
        mb==5000;
    }
}
void bank::beq()
{}
void bank::deposit()
{}
void bank::withdrawal()
{}
int main()
{

    int an,o;
    bank cus[100];
        cout<<"enter your account number[0-99]";
        cin>>an;
        cus[an].put();
        cout<<"setect the operation you need to do\n1.withdrawal\n2.deposit\n3.balance enquiry";
        cin>>o;
        switch(o)
        {
        case 1:
            cus[an].withdrawal();
        case 2:
            cus[an].deposit();
        case 3:
            cus[an].beq();
        }
}
