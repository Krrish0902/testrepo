#include <iostream>
using namespace std;
class bank
{
    private:int amt,bal,t;
    public:void beq();
           void deposit();
           void withdrawal();
           void put();
};
void bank::put()
{
    cout<<"enter the type account type\n1.savings\n2.current";
    cin>>t;
    if(t==1)
        bal=1000;
    else
        bal=5000;
}
void bank::withdrawal()
{
    cout<<"enter the amout to be withdrawn";
    cin>>amt;
    if(amt>bal)
    {
        cout<<"insuufficient balance";
    }
    else
    {
        bal=bal-amt;
        cout<<bal;
    }
}
void bank::deposit()
{
    cout<<"enter the amount to be deposited";
    cin>>amt;
    bal=bal+amt;
    cout<<bal;
}
void bank::beq()
{
    cout<<bal;
}
int main()
{

    int an,R,o,R1;
    bank cus[100];
    label1:
        {
    cout<<"enter your account number[0-99]";
    cin>>an;
    cus[an].put();
    label2:
        {
    cout<<"setect the operation you need to do\n1.withdrawal\n2.deposit\n3.balance enquiry";
    cin>>o;
    if(o==1)
        cus[an].withdrawal();
    else if(o==2)
        cus[an].deposit();
    else
        {
        cus[an].beq();
        cout<<"\naccount number:"<<an;
        }
        }
        }
    cout<<"\ndo you wanna continue\n1.yess\n2.noo";
    cin>>R;
    if(R==1)
    {
        cout<<"do you want to continue in same account or another\n1.same\n2.another";
        cin>>R1;
        if(R1==2)
        {
            goto label1;
        }
        else
            goto label2;
    }
    else
    {
        return 0;
    }
}
