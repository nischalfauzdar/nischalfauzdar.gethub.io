/*A phone number, such as (212) 767-8900,can be thought of as having three parts: the area code (212), the exchange (767), and the number (8900). 
Write a program that uses a structure to store these three parts of a phone number separately. 
Call the structure phone. Create two structure variables of type phone. Initialize one, and have the user input a number for the  
other one.
Then display both numbers. The interchange might look like this: 
Enter your area code, exchange, and number: 415 555 1212 
My number is (212) 767-8900 
Your number is (415) 555-1212*/
#include<iostream>
using namespace std;
struct phonenumber
{
	int area_code,exchange,number;
};
main()
{
	struct phonenumber S1,S2;
	S1.area_code=212;
	S1.exchange=767;
	S1.number=8900;
	cout<<"\nEnter the value for S2";
	cin>>S2.area_code>>S2.exchange>>S2.number;
	cout<<"\nMy number is "<<"("<<S1.area_code<<") "<<S1.exchange<<"-"<<S1.number;
	cout<<"\nYour number is "<<"("<<S2.area_code<<") "<<S2.exchange<<"-"<<S2.number;
}  
