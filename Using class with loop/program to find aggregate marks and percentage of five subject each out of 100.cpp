#include<iostream>
using namespace std;
class calculation
{
public:
    int s,t=0,i=0;
    float per;
    void total()
    {
        for(i=1;i<=5;i++)
        {
            cout<<"\n Enter marks for subject "<<i<<" => ";
            cin>>s;
            t=t+s;
        }
         cout<<"\n Aggregate marks => "<<t;
         per=t/5;
         cout<<"\n Total percentage => "<<per;
    }

};
  int main()
  {
      cout<<"\n ****************Enter marks for five subject**************";
      calculation obj;
      obj.total();
      return(0);
  }
