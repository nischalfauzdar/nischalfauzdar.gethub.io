/*Write a program to create class figure which has data members as side length, breadth, radiusand pi. and two constructor are used one which 
inisilize all the values and second which take all the values from the users.
i) 	Write a program to calculate area of circle, area of square and area of rectangle.
ii) Modify the above program such that in the parameterized constructor the value of pi is default.*/
#include<iostream>
using namespace std;
class figure
{
	int side;
	int length;
	int breadth;
	int radius;
	double pi;
	public:
		figure()
		{
		
			length=2;
			breadth=2;
			side=4;
			radius=4;
			pi=3.14;
		}
		figure(int l,int b, int s, int r, double p)
		{
			length=l;
			breadth=b;
			side=s;
			radius=r;
			pi=p;
		}
		void area_square()
		{
			cout<<"\n Area of square: "<<side*side;
		}
		void area_rectangle()
		{
			cout<<"\n Area of rectangle: "<<length*breadth;
		}
		void area_circle()
		{
			cout<<"\n Area of Circle: "<<pi*radius*radius;
		}
		
};
main()
{
	figure f1;
	f1.area_square();
	f1.area_rectangle();
	f1.area_circle();
	
}
