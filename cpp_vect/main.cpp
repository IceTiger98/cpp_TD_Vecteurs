#include "CVect3D.h"
#include <iostream>

using namespace std;

int main() {
	CVect2D v1(2, 3);
	v1.affiche();

	CVect2D v2(3, 4);



	CVect2D v3(v2);



	CVect2D v4;
	v4 = v3 + v2;
	cout << "v3 + v2 = " << endl;
	v4.affiche();

	v4 = v3 - v2;
	cout << "v3 - v2 = " << endl;
	v4.affiche();

	v4 = v3 / v2;
	cout << "v3 / v2 = " << endl;
	v4.affiche();

	v4 = v3 * v2;
	cout << "v3 * v2 = " << endl;
	v4.affiche();

	CVect3D v5(2, 3, 4);
	v5.affiche();



	CVect3D v6;
	v6 = v5 + v5;
	cout << "v5 + v5 = " << endl;
	cout << v6;

	v6 = v5 - v5;
	cout << "v5 - v5 = " << endl;
	cout << v6;

	v6 = v5 / v5;
	cout << "v5 / v5 = " << endl;
	cout << v6;

	v6 = v5 * v5;
	cout << "v5 * v5 = " << endl;
	cout << v6;



	CVect3D v7(3, 2, 4);
	cout << "v7 = " << endl;
	cout << v7;
}