#include<iostream>
using namespace std;
class table
{
public:
   int i,j,sp,ep;
   void accept()
   {
       cout<<"\n Enter starting point=> ";
       cin>>sp;
       cout<<"\n Enter ending point  => ";
       cin>>ep;
   }
    void display();
};
 void table :: display()
 {
    for(i=1 ; i<=10 ; i++)
    {
       for(j=sp ; j<=ep ; j++)
       {
           printf(" %3d",i*j);
       }
       printf("\n");
    }
 }
 int main()
 {
     table s;
     s.accept();
     s.display();
     return(0);
 }
