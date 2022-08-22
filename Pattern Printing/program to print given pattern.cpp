// program to print following pattern.
 /*
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1
 1 0 1 0 1 0 1   */

#include<iostream>
using namespace std;
class pattern
{
public:
    int i,j,r;
    void rhombus()
    {
        cout<<"Enter row size=> ";
        cin>>r;
        for(i=1; i<=r; i++)
        {
           for(j=1; j<=i; j++)
           {
               if((i+j)%2==0)
               {
                   cout<<" 1";
               }
               else
               {
                   cout<<" 0";
               }
           }
            cout<<"\n";
        }
    }
};
int main()
{
    pattern s;
    s.rhombus();
    return(0);
}
