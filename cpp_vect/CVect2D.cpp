#include "CVect2D.h"
#include <iostream>

using namespace std;


CVect2D::CVect2D()
{
	this->flt_x = 0;
	this->flt_y = 0;
}

CVect2D::CVect2D(float fl_x, float fl_y)
{
	this->flt_x = fl_x;
	this->flt_y = fl_y;
}

CVect2D::CVect2D(CVect2D& v)
{
	this->flt_x = v.flt_x;
	this->flt_y = v.flt_y;
}

CVect2D::~CVect2D()
{
}




float CVect2D::getX() const
{
	return flt_x;
}

float CVect2D::getY() const
{
	return flt_y;
}


void CVect2D::setX(float fl_x)
{
	this->flt_x = fl_x;
}

void CVect2D::setY(float fl_y)
{
	this->flt_y = fl_y;
}




void CVect2D::affiche() const
{
	cout << "en X : " << flt_x << ' ,' << "en Y : " << flt_y << endl;
}




CVect2D CVect2D::operator+(CVect2D& v) const
{
	CVect2D v_temp;

	v_temp.flt_x = this->flt_x + v.flt_x;
	v_temp.flt_y = this->flt_y + v.flt_y;

	return v_temp;
}

CVect2D CVect2D::operator/(CVect2D& v)
{
	CVect2D v_temporaire;
	if (v.flt_x != 0 && v.flt_y != 0) {
		v_temporaire.flt_x = this->flt_x / v.flt_x;
		v_temporaire.flt_y = this->flt_y / v.flt_y;

		return v_temporaire;
	}
	return *this;
}

CVect2D CVect2D::operator-(CVect2D& v) const
{
	CVect2D v_temp;

	v_temp.flt_x = this->flt_x - v.flt_x;
	v_temp.flt_y = this->flt_y - v.flt_y;

	return v_temp;
}

CVect2D CVect2D::operator*(CVect2D& v) const
{
	CVect2D v_temp;

	v_temp.flt_x = this->flt_x * v.flt_x;
	v_temp.flt_y = this->flt_y * v.flt_y;

	return v_temp;
}

bool coincide2D(const CVect2D& v, const CVect2D& w)
{
	return v.flt_x == w.flt_x && v.flt_y == w.flt_y;
}