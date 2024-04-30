/*Imagine you're creating a virtual library system for a bustling community center. You want to implement a function template to handle the
borrowing process for various types of items available in the library, such as books, DVDs, and board games. Each item has its own checkout 
duration and special requirements for borrowing.

Your task is to design a function template called borrowItem that can handle the borrowing process for any type of item in the library. 
The function should take in the item to be borrowed, the borrower's name, and any additional parameters specific to the item being borrowed. 
Additionally, ensure that the function template can handle different types of items seamlessly, allowing for flexibility and efficiency in 
the borrowing process.*/
#include <iostream>
using namespace std;
template<class ItemType>
void borrowitem(const ItemType& item, const string& borrowerName)
{
	cout << "\nBorrowing " << item << " by " << borrowerName<<".";
}
main() 
{
    string book = "Power system";
    borrowitem(book, "Nischal");

    string dvd = "IronMan";
    borrowitem(dvd, "Aashish");

	string boardGame = "GTA";
    borrowitem(boardGame, "Allen");

    return 0;
}








































