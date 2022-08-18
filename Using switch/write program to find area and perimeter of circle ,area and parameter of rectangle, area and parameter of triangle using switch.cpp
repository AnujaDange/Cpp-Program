#include<iostream>
using namespace std;
class circle
{
public:
    int r,area,perimeter;
    void c_area()
    {
        cout<<"\n Enter radius of circle=>";
        cin>>r;
        area=3.14*r*r;
        cout<<"\n Area of circle=> "<<area;
    }
    void c_peri()
    {
        perimeter=2*3.14*r;
        cout<<"\n Perimeter of circle => "<<perimeter;
    }
};
class rectangle
{
public:
    int l,b,area1,w,perimeter1=0,len;
    void r_area()
    {
       cout<<"\n Enter length and breadth of rectangle=> ";
       cin>>l>>b;
       area1=l*b;
       cout<<"\n Area of rectangle=> "<<area1;
    }
    void r_peri()
    {
        cout<<"Enter width and length of rectangle to calculate perimeter=> ";
        cin>>len>>w;
        perimeter1=2*(len+w);
        cout<<"\n Perimeter of rectangle => "<<perimeter1;
    }

};
class triangle
{
public:
    int base,height,area2,a,b,c,perimeter2;
    void t_area()
    {
        cout<<"\n Enter length and breadth for triangle=> ";
        cin>>base>>height;
        area2=0.5*(base*height);
        cout<<"\n Area of triangle=> "<<area2;
    }
    void t_peri()
    {
        cout<<"\n Enter three sides of triangle=> ";
        cin>>a>>b>>c;
        perimeter2=a+b+c;
        cout<<"\n Perimeter of triangle => "<<perimeter2;
    }
};
int main()
{
    int ch;
    cout<<" \n 1. To calculate Area of circle \n 2. To calculate Area of rectangle \n 3. To calculate Area of rectangle ";
    cout<<"\n\n Enter choice which you want =>";
    cin>>ch;
    switch(ch)
    {
        case 1 : circle obj;
                 obj.c_area();
                 obj.c_peri();
                 break;

        case 2 : rectangle obj1;
                 obj1.r_area();
                 obj1.r_peri();
                 break;

        case 3 : triangle obj3;
                 obj3.t_area();
                 obj3.t_peri();
                 break;

        default : cout<<" \n*************** invalid choice ****************";
                break;

    }

    return(0);
}
