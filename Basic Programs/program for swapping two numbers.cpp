#include<iostream>
#include<conio.h>
using namespace std;
class S
{
  public:
      int a=10,b=20,c;
      void before_swapping();
      void after_swapping();
};
 void S :: before_swapping()
 {
  cout<<" Number Before Swapping=> "<<endl;
  cout<<" A = "<<a<<endl<<" B = "<<b<<endl;
  c=a;
  a=b;
  b=c;
 }
 void S :: after_swapping()
 {
   cout<<" Number After Swapping=> "<<endl;
   cout<<" A = "<<a<<endl<<" B = "<<b<<endl;
 }
 int main()
 {
     S obj;
     obj.before_swapping();
     obj.after_swapping();
     return(0);
 }
