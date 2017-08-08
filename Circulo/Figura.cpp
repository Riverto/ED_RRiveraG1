#include "Figura.h"



Figura::Figura(double area, double perimetro)
{
	this->area = area;
	this->perimetro = perimetro;
}
double Figura::getArea() {
	return this->area;
}
double Figura::getPerimetro() {
	return this->perimetro;
}
void Figura::setArea(double area) {
	this->area = area;
}
void Figura::setPerimetro(double perimetro) {
	this->perimetro = perimetro;
}