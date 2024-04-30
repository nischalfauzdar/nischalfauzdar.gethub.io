#include<iostream>
using namespace std;
struct student//start of struct
{
	int reg_no;
	double cgpa;
//	char name[30];
	string name;
};//end of struct
main()
{
	student s1,s2;//declaration of st variables
	//INTIALIZING STRUCT VARIABLE
	s1.reg_no=1101;//use of dot operator
	s1.cgpa=9.6;
	s1.name="ABC";
	//TAKING VALUE FROM USER
	cout<<"\nEnter the vales for s2";
	cin>>s2.cgpa>>s2.name>>s2.reg_no;
	//display information
	cout<<"\nname--"<<s1.name<<"\ncgpa== "<<s1.cgpa<<"\nregno--"<<s1.reg_no;
	cout<<"\nname--"<<s2.name<<"\ncgpa== "<<s2.cgpa<<"\nregno--"<<s2.reg_no;
}
