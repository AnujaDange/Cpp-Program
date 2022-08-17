#include<iostream>
using namespace std;
class sum
{
public:
    int n,i,sum=0,bill=0;
    void input();
   // void output();
};
void sum :: input()
{
    cout<<"\n Enter total bills=>";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n Enter "<<i<<" bill=>";
        cin>>bill;
        sum=sum+bill;
    }
     cout<<"\n Total bill amount=> "<<sum;
}
 /*void sum :: output()
{
    cout<<"\n Total bill amount=> "<<sum;
}*/
int main()
{
    sum obj;
    obj.input();
   // obj.output();
    return(0);
}
