#include<iostream>
using namespace std;
class E_bill
{
public:
    int bill_u,i=0;
    void put()
    {
        cout<<"\n Enter number of unit consumed by customer => ";
        cin>>bill_u;

      if(bill_u>=100)
      {
          cout<<"\n Electricity charge will be 90 paisa";
      }
      else
      {
          cout<<"\n Electricity charge will be 80 paisa";
      }
    }
};
 int main()
 {
     E_bill obj;
     obj.put();
     return(0);
 }
