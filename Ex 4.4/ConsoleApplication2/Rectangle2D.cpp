//Submitted by Sabin Sapkota//
//Ex 4.4//

#include "Rectangle2D.h"
using namespace std;

//default rectangle//
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;

}

//creating rectangle with attributes from users//
Rectangle2D::Rectangle2D(double x, double y, double w, double h)
{
	x = x;
	y = y;
	width = w;
	height = h;
}
//get functions for co-ordinates and dimensions of rectangle//
double Rectangle2D::getX()const
{
	return x;
}
double Rectangle2D::getY()const
{
	return y;
}
double Rectangle2D::getWidth()const
{
	return width;
}
double Rectangle2D::getHeight()const
{
	return height;
}
//set functions for values
void Rectangle2D::setX(const double newx)
{
	x = newx;
}
void Rectangle2D::setY(const double newy)
{
	y = newy;
}
void Rectangle2D::setWidth(const double W)
{
	width = W;
}
void Rectangle2D::setHeight(const double H)
{
	height = H;
}
//functions to calculate
double Rectangle2D::getArea()const
{
	return width * height;
}
double Rectangle2D::getPerimeter()const
{
	return 2 * (width + height);
}

//check points
bool Rectangle2D::contains(double x, double y)
{
	double pointX = x;
	double pointY = y;

	if (pointX < (this->x + (.5*this->width)) && pointX>
		(this->x - (.5*this->width)) &&
		pointY< (this -> y+ (.5*this->height)) && pointY
		>(this->y - (.5*this->height)))
		return true;
	else
		return false;
}

//function for checking overlapping
bool Rectangle2D::overlaps(const Rectangle2D& r)
{
	double r1w = this->width;
	double r1h = this->height;
	double r2w = r.width;
	double r2h = r.height;
	if (r2w <= 0 || r2h <= 0 || r1w <= 0 || r1h <= 0)
		return false;
	double r1x = this->x;
	double r1y = this->y;
	double r2x = r.x;
	double r2y = r.y;
	r2w = r2w + r2x;
	r2h = r2w + r2y;
	r1w = r1w + r1x;
	r1h = r1h + r1y;

	if ((r2w < r2x || r2w > r1x) && (r2h, r2y || r2h > r1y) && (r1w < r1x || r1w > r2x) && (r1h < r1y || r1h > r2y))
		return true;
	else
		return false;
}

//fuctions for checking inside rectangle
bool Rectangle2D::contains(const Rectangle2D& r)
{
	if (this->x - (this->width / 2) > r.x - (r.width / 2)
		&& this->x + (this->width / 2)< r.x + (r.width / 2)
		&& this->y - (this->height / 2) <r.y - (r.height / 2)
		&& this->y + (this->height / 2)> r.y + (r.height / 2))
		return true;
	else
		return false;
}