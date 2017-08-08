#include "Circulo.h"



Circulo::Circulo()
{
	this->radio = 0.0;
}

Circulo::Circulo(double area, double perimetro, double radio)
{
	this->area = area;
	this->perimetro = perimetro;
	this->radio = radio;
}

Circulo::Circulo(Figura figura, double radio)
{
	this->area = figura.getArea();
	this->perimetro = figura.getPerimetro();
	this->radio = radio;
}

Circulo::Circulo(double radio)
{
	this->radio = radio;
}

double Circulo::getRadio()
{
	return this->radio;
}

void Circulo::setRadio(double radio)
{
	this->radio = radio;
}
