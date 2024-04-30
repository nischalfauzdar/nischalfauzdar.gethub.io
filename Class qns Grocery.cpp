/*Define a class named GroceryItem.
Include private fields that hold an item’s stocknumber, price, quantity in stock,and total value.
Write a public function named dataEntry()that calls four private functions.
Three of the private functions prompt the user for keyboard input for a value for one of the data fields stock number, price,
and quantity in stock.
Include a fourth private function that calculates the GroceryItem’s total value field (price times quantity in stock).
Write a public function that displays a GroceryItem’s values.
Finally, write a main()function that declares a GroceryItem object, assigns values to its fields, and uses the display function.
 Save the file as Grocery.cpp*/
#include<iostream>
using namespace std;
class GroceryItem
{
	private:
		int stockno;
		int price;
		int quantity;
		int totalvalue;
		void setstockno()
		{
			cin>>stockno;
		}
		void setprice()
		{
			cin>>setprice;
		}
		void setquantity()
		{
			cin>>setquantity;
		}
		void settotalvalue()
		{
			cin>>settotalvalue;
		}
		public:
			void dataEntry()
			{
				set.stockno;
				set.price;
				set.quantity;
				set.totalvalue;
			}
		void display()
		{
			
		}
};
