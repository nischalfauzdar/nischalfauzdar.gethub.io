//Write a program to swap two integer value and two float value using function template.
#include<iostream>
using namespace std;
template<class T>
void swapValue(T&a, T&b)
{
	T temp=a;
	a=b;
	b=temp;
}

main()
{
	int a,b;
	float x,y;
	cout<<"Enter two integer number:";
	cin>>a,b;
	cout<<"Enter two float number:";
	cin>>x,y;
	swapValue(a,b);
	cout<<"After swapping the integer value are:"<<a<<"and"<<b;
	swapValue(x,y);
	cout<<"After swapping the float value are:"<<x<<"and"<<y;
	return 0;
}
