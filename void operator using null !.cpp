//Write the program to print all the positive values of the variables in null ! by overloading urinary minus.
#include<iostream>
using namespace std;
class demo
{ 
	int x,y,z;
	public:
	demo(int a, int b, int c)
	{
		x=a;
		y=b;
		z=c;
	}
	demo()
	{
		x=0;
		y=0;
		z=0;
	}
	void operator !()
		{
			x=!x;
			y=!y;
			z=!z;
		}
		void show()
		{
			cout<<x<<"\t"<<y<<"\t"<<z<<endl;
		}
};
		main()
		{
			demo d1;
			!d1;//call the operator overloading function'
			d1.show();
			
		}
	

