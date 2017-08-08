#include <iostream>
#include "Figura.h"
#include "Triangulo.h"

using namespace std;

int main()
{
	Figura testF = Figura(7, 8);
	Triangulo test = Triangulo(1.1,2.2,3.3,4,5,6,testF);
	cout << test.getBase();
	cout << test.getAltura();
	cout << test.getHipo();
	cout << test.getSen();
	cout << test.getCsen();
	cout << test.getTan();
	cout << test.getArea();
	cout << test.getPerimetro();
	cin.get();
}