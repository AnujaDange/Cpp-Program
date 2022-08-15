#include<iostream>
using namespace std;
class Arithematic
{
    public:
    int add,sub,mul,no1,no2;
    float div;
    void putinfo();
    void addition();
    void substract();
    void multiplication();
    void division();
};
void Arithematic :: putinfo()
{
    cout<<"Enter two number=>"<<endl;
    cin>>no1>>no2;
}
void Arithematic :: addition()
{
    add=no1+no2;
    cout<<"Addition of two number=> "<<add<<endl;
}
void Arithematic :: substract()
{
    sub=no1-no2;
    cout<<"Substraction of two number=> "<<sub<<endl;
}
void Arithematic :: multiplication()
{
    mul=no1*no2;
    cout<<"Multiplication of two number=> "<<mul<<endl;
}
void Arithematic :: division()
{
    div=no1/no2;
    cout<<"Division of two number=> "<<div<<endl;
}
int main()
{
   Arithematic obj;
   obj.putinfo();
   obj.addition();
   obj.substract();
   obj.multiplication();
   obj.division();
   return(0);
}
