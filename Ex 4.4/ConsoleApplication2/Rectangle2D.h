//Submitted by Sabin Sapkota//
//Ex 4.4//

//header file//
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;
#include <string>

class Rectangle2D
{
public:
	Rectangle2D();
	Rectangle2D(double, double,double, double);
	//get functions for co-ordinates and dimensions//
	double getX()const;
	double getY()const;
	double getWidth()const;
	double getHeight()const;
	//set functions
	void setX(double const);
	void setY(double const);
	void setWidth(double const);
	void setHeight(double const);
	//to calculate area and perimeter
	double getArea()const;
	double getPerimeter()const;
	//declaration of contains and overlap function
	bool contains(double, double);
	bool contains(const Rectangle2D& r);
	bool overlaps(const Rectangle2D& r);

private:
	double x;
	double y;
	double width;
	double height;


};

#endif
