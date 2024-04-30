/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 100/-
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 100/- to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.*/
#include <iostream>
using namespace std;
class tollBooth
{
	private:
    	int totalCars;
   		 double totalCash;

	public:
    
    	tollBooth() : totalCars(0), totalCash(0.0) {}// Constructor to initialize data members

    
    void payingCar()// Function to increment car total and add 100 to cash total
	{
        totalCars++;
        totalCash += 100.0;
    }

    
    void nopayCar() // Function to increment car total (no addition to cash total)
	{
        totalCars++;
    }

    
    void display() // Function to display the total cars and total cash collected
	{
        cout << "Total Cars: " << totalCars << std::endl;
        cout << "Total Cash Collected: " << totalCash << std::endl;
    }
};

main() 
	{
    tollBooth t1;
    // Simulating cars passing by the toll booth
    t1.payingCar(); // Car pays toll
    t1.payingCar(); // Car pays toll
    t1.nopayCar();  // Car does not pay toll
    t1.payingCar(); // Car pays toll
    t1.nopayCar();  // Car does not pay toll

    // Displaying total cars and total cash collected
    t1.display();

    return 0;
	}

