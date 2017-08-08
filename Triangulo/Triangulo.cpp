#include "Triangulo.h"



Triangulo::Triangulo(double base, double altura, double hipotenusa, int sen, int csen, int tan, double area, double perimetro)
{
	this->base = base;
	this->altura = altura;
	this->hipotenusa = hipotenusa;
	this->sen = sen;
	this->csen = csen;
	this->tan = tan;
	this->area = area;
	this->perimetro = perimetro;
}

Triangulo::Triangulo(double base, double altura, double hipotenusa, int sen, int csen, int tan)
{
	this->base = base;
	this->altura = altura;
	this->hipotenusa = hipotenusa;
	this->sen = sen;
	this->csen = csen;
	this->tan = tan;
}

Triangulo::Triangulo(double base, double altura, double hipotenusa, int sen, int csen, int tan, Figura figura)
{
	this->base = base;
	this->altura = altura;
	this->hipotenusa = hipotenusa;
	this->sen = sen;
	this->csen = csen;
	this->tan = tan;
	this->area = figura.getArea();
	this->perimetro = figura.getPerimetro();
}

Triangulo::Triangulo(double area, double perimetro)
{
	this->base = 0.0;
	this->altura = 0.0;
	this->hipotenusa = 0.0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
	this->area = area;
	this->perimetro = perimetro;
}

Triangulo::Triangulo()
{
	this->base = 0.0;
	this->altura = 0.0;
	this->hipotenusa = 0.0;
	this->sen = 0;
	this->csen = 0;
	this->tan = 0;
}

double Triangulo::getBase()
{
	return this->base;
}

double Triangulo::getAltura()
{
	return this->altura;
}

double Triangulo::getHipo()
{
	return this->hipotenusa;
}

double Triangulo::getSen()
{
	return this->sen;
}

double Triangulo::getCsen()
{
	return this->csen;
}

double Triangulo::getTan()
{
	return this->tan;
}

void Triangulo::setBase(double base)
{
	this->base = base;
}

void Triangulo::setAltura(double altura)
{
	this->altura = altura;
}

void Triangulo::setHipo(double hipo)
{
	this->hipotenusa = hipo;
}

void Triangulo::setSen(int sen)
{
	this->sen = sen;
}

void Triangulo::setCsen(int csen)
{
	this->csen = csen;
}

void Triangulo::setTan(int tan)
{
	this->tan = tan;
}
