#include <iostream>
using namespace std;
double calculateArea(double side)
{
 return side * side;
}
double calculateArea(double length, double width)
{
 return length * width;
}
int main()
{
 double side, length, width;
 cout << "Enter side of square ";
 cin >> side;
 cout << "Enter length of rectangle ";
 cin >> length ;
 cout<<"enter width of rectangle ";
 cin>>width;
 cout << "Area of Square: " << calculateArea(side) << endl;
 cout << "Area of Rectangle: " << calculateArea(length, width);
 return 0;
}
