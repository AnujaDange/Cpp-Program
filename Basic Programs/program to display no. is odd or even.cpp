#include<iostream>
using namespace std;
class Number
{
  public:
  int no;
  void putinfo();
  void getinfo();
};
  void Number :: putinfo()
  {
      cout<<"Enter any positive number=>"<<endl;
      cin>>no;
  }
  void Number :: getinfo()
  {
      if(no%2==0)
      {
         cout<<no<< " is even"<<endl;
      }
      else
      {
         cout<<no<< " is odd"<<endl;
      }

  }
  int main()
  {
      Number obj;
      obj.putinfo();
      obj.getinfo();
      return(0);
  }
