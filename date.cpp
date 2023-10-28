#include <iostream>
using namespace std;
class date
{
public:int y,m,d,ny,nm,nd,x=0;
       void assign();
       void cal();
       void show();
       void nshow();
};
void date::assign()
{
cout<<"\nenter a date in the form dd mm yyyy:- ";
cin>>d>>m>>y;
}

void date::show()
{
if(y>=1&&m>=1&&m<=12&&d>=1&&d<=31)
{
    if((m==4||m==6||m==9||m==11)&&d>30)
    {
        cout<<"invalid date";
    }
    else if(m==2&&d>=29)
    {
        if((y%4==0&&y%100!=0)||(y%400==0))
        {
            if(d>29)
            {
              cout<<"invalid date";
            }
            else
            {
                cout<<"date:"<<d<<"/"<<m<<"/"<<y;
                 nd=1;
                 nm=3;
                 ny=y;
                 cout<<"\nnext date:"<<nd<<"/"<<nm<<"/"<<ny;
            }
        }
        else
        {
            cout<<"invalid date";
        }
    }
    else
        {
        cout<<"date:"<<d<<"/"<<m<<"/"<<y;
        if(d==30&&(m==4||m==6||m==9||m==11))
          {
             nd=1;
             nm=m+1;
             ny=y;
             cout<<"\nnext date:"<<nd<<"/"<<nm<<"/"<<ny;
          }
        else if(d==31&&(m==1||m==10||m==3||m==7||m==8||m==5))
          {
             nd=1;
             nm=m+1;
             ny=y;
             cout<<"\nnext date:"<<nd<<"/"<<nm<<"/"<<ny;
          }
      else if(d==31&&m==12)
        {
             nd=1;
             nm=1;
            ny=y+1;
            cout<<"\nnext date:"<<nd<<"/"<<nm<<"/"<<ny;
        }
        else
        {
            nd=d+1;
            nm=m;
            ny=y;
            cout<<"\nnext date:"<<nd<<"/"<<nm<<"/"<<ny;

        }
     }
}
else
{
    cout<<"invalid date";
}
}
int main()
{
date dat;
dat.assign();
dat.show();
return main();
}
