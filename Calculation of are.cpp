/*Write a program to calculate the area of circle, rectangle and triangle by using same name function area (function overloaded) and
 the name ofyour class willbefigure.
a. Modify the above programsuch that argumnets to the functions of area of square is passed by the value.
b. For area ofrectangle arguments are passed by references.
c. For area of circle arguments are passed by address.*/
#include<iostream>
using namespace std;
class figure
{
int length,breadth,side;
double radius,pi;
public:
void area(int s)
{
side=s;
int ar=side*side;
cout<<"\nArea of sqaure: "<<ar;
}
void area(int l,int b)
{
length=l;
breadth=b;
int ar=l*b;
cout<<"\nArea of rectangle: "<<ar;
}
void area(double r,double p)
{
radius=r;
pi=p;
double ar=pi*r*r;
cout<<"\nArea of circle: "<<ar;
}
};
main()
{

figure f1;
int s,l,b,r;
double p;
cin>>s>>l>>b>>r>>p;
f1.area(s);
f1.area(l,b);
//f1.area(r,p);
// int si,le,br,ra,pi;
// cin>>le>>br>>ra>>pi;
// f2.area(si);
}
