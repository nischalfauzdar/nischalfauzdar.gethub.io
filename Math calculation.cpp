#include<iostream>
#include<cmath> // For using mathematical functions like pow() and M_PI
using namespace std;

class Shape {
public:
    double x, y;
    void getdata(double a, double b = 0) {
        cout << "\nEnter the value(s): ";
        cin >> x;
        if (b == 0)
            y = x;
        else
            y = b;
    }
    virtual void display_area() {
        cout << "Shape class";
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * x * y;
        cout << "\nArea of Triangle is " << area;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        double area = x * y;
        cout << "\nArea of Rectangle is " << area;
    }
};

class Circle : public Shape {
public:
    void display_area() override {
        double area = M_PI * pow(x, 2);
        cout << "\nArea of Circle is " << area;
    }
};

int main() {
    Shape* s;
    Triangle t;
    Rectangle r;
    Circle c;

    s = &t;
    s->getdata(0);
    s->display_area();

    s = &r;
    s->getdata(0);
    s->display_area();

    s = &c;
    s->getdata(0);
    s->display_area();

    return 0;
}

