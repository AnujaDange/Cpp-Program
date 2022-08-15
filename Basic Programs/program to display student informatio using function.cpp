#include<iostream>
using namespace std;
class Student
{
 public:
    char name[20];
    int rollno;
    char address[10];
    void putinfo();
    void getinfo();
};
  void Student :: putinfo()
  {
      cout<<"Enter name of student =>"<<endl;
      cin>>name;
      cout<<"Enter roll number =>"<<endl;
      cin>>rollno;
      cout<<"Enter address of student =>"<<endl;
      cin>>address;
  }
  void Student :: getinfo()
  {
      cout<<"Name of student is "<<name<<"."<<endl;
      cout<<"Roll number of student is "<<rollno<<"."<<endl;
      cout<<"Address of student is "<<address<<"."<<endl;
  }
  int main()
  {
      Student obj;
      obj.putinfo();
      cout<<"\n******************information***********************\n\n";
      obj.getinfo();
      cout<<"\n********************************************************";
      return(0);
  }
