/*Define a class to represent a bank account. Include the following members.
Data members
1. Name of the depositer
2. Account number
3. Typeof the account
4. Balance amount in the account
Member functions
1. To assign initial value
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Write the mainprogram to test the program*/
#include<iostream>
using namespace std;
class Bank
{
	string name;
	int acc_no;
	string type_acc;
	float balance;
	public:
		void intial_values()//no return no arg
		{
			name="A";
			acc_no=1101;
			type_acc="s";
			balance=1000.0;
		//	cout<<"\nEnter the values";
			//cin>>name>>balance>>type_acc>>acc_no;
		}
		void deposit(int x)//no return with arg
		{
			balance+=x;
			cout<<"\nnew balance is"<<balance;
		}
		int withdraw(int x)//with return with arg
		{
			if(balance>x)
			{
				balance=balance-x;
				cout<<"\nnew balance after withdraw"<<balance;
				return balance;
			}
			else
			cout<<"\nyou cannot withdraw";
			}
			void display()
			{
				cout<<name<<"==="<<balance;
			}
};
main()
{
	Bank b;
	b.intial_values();
	b.deposit(1000);
int c=	b.withdraw(500);//with return type with arg
cout<<"\nnew balance"<<c;
b.display();
}
