/* Create a class Student havinf data member as regno and cgpa initialize the value using parameterised constructor and create three objects by
taking values from users.
Third object must has same value as second object*/
#include<iostream>
using namespace std;
class Student
{
	int regno;
	double cgpa;
	public:
		Student(int r, double c)
		{
			cout<<"\nParameterized";
			regno=r;
			cgpa=c;
			Student (Student &S)
			{
				cout<<"\nCopy";
				regno=S.regno;
				cgpa=S.cgpa;
			}
			void display ()
			{
				cout<<"\n Reg no= "<<regno<<end1;
				cout<<"\n Reg no= "<<regno<<end1;
			}
		}
};
main()
{
	Student S1(1122,9.4);
	Student S2(1122,9.4);
	Student S3(1122,9.4);
	Student S4(S2);
	S1.display();
	S2.display();
	S3.display();
}
