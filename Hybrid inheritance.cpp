/*Consider a class networs of fig.  the class master derives information from both account and admin classes which in turn derives information 
from the class person. Define all the four classes and write a program to create, update and display the information contained in master 
objects. */
#include<iostream> 
using namespace std;   
class person  
 {  
      public:  
      char name[10];  
      int code;  
      void getp()  
      {  
           cout<<"Enter Name : ";  
           cin>>name;  
           cout<<"\nEnter Code : ";  
           cin>>code;  
      }  
 };  
 class account : virtual public person  
 {  
      public:  
      double pay;  
      void getac()  
      {  
           cout<<"\nEnter Salary : Rs. ";  
           cin>>pay;  
      }  
 };  
 class admin : virtual public person  
 {  
      public:  
      double exp;  
      void getad()  
      {  
           cout<<"Enter Experience : ";  
           cin>>exp;
	
      }  
 };  
 class master : public account, public admin  
 {  
      public:  
      void disp()  
      {  
           cout<<"\n=========================\nName\t\t: "<<name;  
           cout<<"\nCode\t\t: "<<code;  
           cout<<"\nSalary\t\t: Rs."<<pay;  
           cout<<"\nExperience\t: "<<exp<<"Years";  
           cout<<"\n=========================";  
      }  
 };   
 main()  
 {  
      master m;  
      m.getp();  
      m.getac();  
      m.getad();  
      m.disp();  
 }  
