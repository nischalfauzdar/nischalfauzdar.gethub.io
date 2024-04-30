// Write aprogram to overload prefix and postfix decrement operators.
#include<iostream>
using namespace std;
class Demo
{
	int val;
	Demo()
	{
		val=10;
	}
	void operator--()// prefix decrement
	{
		val--;
		val=val-3;
	}
	void operator--(int)//postfix
	{
		val--;
	}
	void opertor !()
	{
		
	}
		Demo d1,d2,d3;
		--d3;
		!d3;
};

