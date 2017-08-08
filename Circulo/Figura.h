#pragma once
class Figura
{
public:
	Figura();
	Figura(double, double);
	void setArea(double);
	void setPerimetro(double);
	double getArea();
	double getPerimetro();
protected:
	double area, perimetro;
};

