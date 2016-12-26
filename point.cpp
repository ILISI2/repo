#include "stdafx.h"
#include "point.h"


point::point(int xx, int yy):x(xx),y(yy)
{
	cout << "bonjour" << endl;
	cout << "ilisi2" << endl;

}


point::~point()
{
}

bool point::operator<(const point &) const
{
	return (x<y);
}

bool point::operator>(const point & p) const
{
	return x > p.x;
}

bool point::operator!=(const point & p) const
{
	bool r = (x != p.x || y != p.y);
	return r;
}

bool point::operator==(const point & p) const
{
	
	return !((*this)!=p);
}

ostream & operator<<(ostream & s, const point & p)
{
	// TODO: insert return statement here
	s << p.x << " " << p.y << " ";
	return s;
}
