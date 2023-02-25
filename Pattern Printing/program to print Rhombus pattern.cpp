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
           for(j=1; j<=r-i; j++)
           {
               cout<<"  ";
           }
            for(j=1; j<=r; j++)
           {
              cout<<"*";
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
