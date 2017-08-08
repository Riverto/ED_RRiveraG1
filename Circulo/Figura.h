#pragma once
class Figura
{
public:
	Figura(double, double);
	void setArea(double);
	void setPerimetro(double);
	double getArea();
	double getPerimetro();
private:
	double area, perimetro;
};

