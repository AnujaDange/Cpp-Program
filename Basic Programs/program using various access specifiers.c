#include<iostream>
using namespace std;
class emp
{
public:
    int emp_id;
    char name[20];
    char address[20];
private:
    void getinfo()
    {
        cout<<"\n Enter id of employee=>";
        cin>>emp_id;
        cout<<"\n Enter name of employee=>";
        cin>>name;
        cout<<"\n Enter address of employee=>";
        cin>>address;
    }
    void putinfo()
    {
        cout<<"id of employee is "<<emp_id;
        cout<<"\n Name of employee is "<<name;
        cout<<"\n Address of employee is "<<address;
    }
};
  int main()
  {
      emp obj;
      obj.getinfo();
      obj.putinfo();
      return(0);
  }




