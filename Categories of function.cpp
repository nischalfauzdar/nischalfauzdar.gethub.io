//CATEGORIES OF FUNCTION
#include<iostream>
using namespace std;
class demo
{
	int a,b,c;
	public:
	 void sum();//no retrurn no argument
		void sub(int x,int y);//no return with argument
		 int mul();//with retun no argument
			int div(int x,int y);//with return with argumrnt
		};
		void demo::sum()
		{
			a=10;
			b=20;
			c=a+b;
			cout<<"\nSum is"<<c;
		}
		void demo::sub(int x,int y)
		{
			a=x;
			b=y;
			c=a-b;
			cout<<"\nSub is"<<c;
		}
		int demo::mul()
		{
			a=2;
			b=2;
			c=a*b;
			return c;
		}
		int demo::div(int x,int y)
		{
			a=x;
			b=y;c=a/b;
			return c;
		}
		main()
		{
			demo d1;
			d1.sum();//no retun no arg
		d1.sub(20,10);//no retun with arg
		int c=d1.mul();//with return no arg
		cout<<"\nmul is "<<c;
		int d=d1.div(16,4);//with retun with arg
		cout<<"\ndiv is "<<d;
		}
		
