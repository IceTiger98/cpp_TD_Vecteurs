#pragma once
#include "CVect2D.h"

class CVect3D : public CVect2D {

private:

	float flt_z;

protected:



public:

	//Constructeur
	CVect3D();
	CVect3D(float fl_x = 1, float fl_y = 1, float fl_z = 1);

	//Constructeur de copies
	CVect3D(CVect3D& v);

	//Destructeur
	~CVect3D();



	//Accesseur get
	float getZ();

	//Mutateur set
	void setZ(float fl_z);



	//Méthode amie
	friend bool coincide3D(const CVect3D& v, const CVect3D& w, const CVect3D& x);



	void affiche()const;



	//Surcharge opérateur
	//Surcharge opérateur +
	CVect3D operator +(CVect3D& v)const;

	//Surcharge opérateur /
	CVect3D operator /(CVect3D& v);

	//Surcharge opérateur -
	CVect3D operator -(CVect3D& v)const;

	//Surcharge opérateur *
	CVect3D operator *(CVect3D& v)const;

	//Surcharge <<
	friend ostream& operator<<(ostream& os, const CVect3D& v);

	//Surcharge =
	CVect3D operator=(const CVect3D& v);
};
