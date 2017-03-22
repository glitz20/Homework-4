//Submitted by Sabin Sapkota//
//Ex 4.4//
#include "Rectangle2D.h"
#include<iostream>
using namespace std;

int main()
{   //creating three rectangles//
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

		cout << "The area of the rectangle (2, 2, 5.5, 4.9) = " << r1.getArea() << endl;//gives area//
	cout << "The perimeter of the rectangle (2, 2, 5.5, 4.9) = " << r1.getPerimeter() << endl;//gives perimeter//
	if (r1.contains(3, 3))//checks the value with function
		cout << "The point (3,3) is inside the rectangle (2, 2, 5.5, 4.9)" << endl;
	else
		cout << "The point (3,3) is outside the rectangle (2,2, 5.5, 4.9)" << endl;

	if (r1.contains(r2))//checks the value with function
		cout << "The rectangle (4, 5, 10.5, 3.2) is inside the rectangle (2, 2, 5.5, 4.9)" << endl;

	if (r1.overlaps(r3))//checks the value with function
		cout << "The rectangle (3, 5, 2.3, 5.4) overlaps the rectangle (2, 2, 5.5, 4.9)" << endl;
	else
		cout << "The rectangle (3, 5, 2.3, 5.4) does not overlap the rectangle (2, 2, 5.5, 4.9)" << endl;

	return 0;
}