#include<iostream>
using namespace std;
class number
{
public:
    int num,i,count=0;
    void putinfo()
    {
        cout<<"\n Enter any positive number => ";
        cin>>num;
    }
    void getinfo()
    {
        for(i=2 ; i<=num ; i++)
        {
           if(num%i==0)
                count++;
        }
           if(count==1)
           {
               cout<<"\n "<<num<<" is prime number ";
           }
           else
           {
               cout<<"\n "<<num<<" is not prime number ";
           }

    }

};
 int main()
 {
     number obj;
     obj.putinfo();
     obj.getinfo();
     return(0);
 }
