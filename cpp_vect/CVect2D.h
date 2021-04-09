#pragma once
#include <iostream>

using namespace std;


class CVect2D {

private:

	float flt_x = 0, flt_y = 0;

protected:



public:

	//Constructeur
	CVect2D();
	CVect2D(float fl_x, float fl_y);

	//Constructeur de copie
	CVect2D(CVect2D& v);

	//Destructeur
	~CVect2D();



	//Accesseurs get
	float getX()const;
	float getY()const;

	//Mutateurs set
	void setX(float fl_x = 0);
	void setY(float fl_y = 0);



	//Fonctions amies
	friend bool coincide2D(const CVect2D& v, const CVect2D& w);



	//Fonction affiche
	void affiche()const;



	//Surcharge op�rateur
	//Surcharge op�rateur +
	CVect2D operator +(CVect2D& v)const;

	//Surcharge op�rateur /
	CVect2D operator /(CVect2D& v);

	//Surcharge op�rateur -
	CVect2D operator -(CVect2D& v)const;

	//Surcharge op�rateur *
	CVect2D operator *(CVect2D& v)const;

};
