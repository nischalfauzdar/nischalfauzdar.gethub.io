/*Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the
title(a string) and price(type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and 
a tape which adds a playing time in minutes (type float). Each of these three classes should have a getdata() function to get its data from
the user at the keyboard, and a putdata() function to display its data. getdata() and a putdata must be pure virtual function in base  class.
Write a main() program to test the book and tape classes by creating instance of them, asking the user to fill in data with getdata() and 
then displaying the data with putdata().*/
 #include <iostream>
using namespace std;
class Publication 
{
	protected:
    string title;
    float price;
	public:
    virtual void getdata() = 0;
    virtual void putdata() const = 0;
};
class Book : public Publication 
{
	private:
    int pageCount;
	public:
    void getdata() override 
	{
        cout << "Enter book title: ";
        getline(cin >> ws, title);
        cout << "Enter book price: ";
        cin >> price;
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putdata() const override
	 {
        cout << "Book Title: " << title << endl;
        cout << "Price: Rs." << price << endl;
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication
 {
	private:
    float playingTime;
	public:
    void getdata() override {
        cout << "Enter tape title: ";
        getline(cin >> ws, title);
        cout << "Enter tape price: ";
        cin >> price;
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
    }

    	void putdata() const override {
        cout << "Tape Title: " << title << endl;
        cout << "Price: Rs." << price << endl;
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};
main() 
{
    Book book;
    Tape tape;

    cout << "Enter book details:" << endl;
    book.getdata();
    cout << "\nEnter tape details:" << endl;
    tape.getdata();

    cout << "\nBook details:" << endl;
    book.putdata();
    cout << "\nTape details:" << endl;
    tape.putdata();
    return 0;
}

