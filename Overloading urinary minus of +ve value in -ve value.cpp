//Write the program to print all the positive values of the variables in negative by overloading urinary minus.
#include<iostream>
using namespace std;
class demo
{
	int x,y,z;
	public:
		demo(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		demo()
		{
			x=10;
			y=20;
			z=30;
		}
		void operator -()//overloading minus operator
		{
			x=-x;
			y=-y;
			z=-z;
		}
		void show()
		{
			cout<<x<<"\t"<<y<<"\t"<<z<<endl;
		}
};
		main()
		{
			demo d1(5,6,7);
			-d1;//call the operator overloading function'
			d1.show();
			demo d2;
			-d2;
			d2.show();
		}
