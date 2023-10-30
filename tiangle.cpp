#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
    private:int x,y,z,a=0;
            float s,ar;
    public:void valid();
           void sides();
           void area();
           void assign();
};
void triangle::assign()
{
    cout<<"enter the sides of the triangle";
    cin>>x>>y>>z;
    s=(x+y+z)/2;
}
void triangle::valid()
{
    if((x>=y+z)&&(y>=x+z)&&(z>=x+y))
    {
        cout<<"triangle is invalid";
    }
    else
    {
        cout<<"triangle is valid";
        a++;
    }
}
void triangle::sides()
{
    if(a==1)
    {
        cout<<"\nsides are: "<<x<<","<<y<<","<<z;
    }
}
void triangle::area()
{
    if(a==1)
    {
        ar=sqrt(s*(s-x)*(s-y)*(s-z));
        cout<<"\narea= "<<ar;
    }
}
int main()
{
    triangle tri;
    tri.assign();
    tri.valid();
    tri.sides();
    tri.area();
    return 0;
}
