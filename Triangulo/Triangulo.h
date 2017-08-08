#pragma once
#include "Figura.h"
class Triangulo :
	public Figura
{
public:
	Triangulo(double base, double altura, double hipotenusa, int sen, int csen, int tan, double area, double perimetro);
	Triangulo(double base, double altura, double hipotenusa, int sen, int csen, int tan);
	Triangulo(double base, double altura, double hipotenusa, int sen, int csen, int tan, Figura figura);
	Triangulo(double area, double perimetro);
	Triangulo();
	double getBase();
	double getAltura();
	double getHipo();
	double getSen();
	double getCsen();
	double getTan();
	void setBase(double base);
	void setAltura(double altura);
	void setHipo(double hipo);
	void setSen(int sen);
	void setCsen(int csen);
	void setTan(int tan);
protected:
	double base, altura, hipotenusa;
	int sen, csen, tan;
};