#include<iostream>
using namespace std;
class year
{
public:
    int ch;
    void get();
    void put();
};
void year :: get()
{
    cout<<"**************Enter choice to display year is leap or not***********\n";
    cin>>ch;
}
void year :: put()
{
    if(ch%4==0)
    {
       cout<<"\n"<<ch<<" is leap year ";
    }
    else
    {
        cout<<"\n"<<ch<<" is not leap year ";
    }
}
int main()
{
   year obj;
   obj.get();
   obj.put();
   return(0);
}
