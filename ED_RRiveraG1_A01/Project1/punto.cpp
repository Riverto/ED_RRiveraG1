#include "punto.h"

punto::punto(int coorx, int coory, int coorz)
{
	this->coorx = coorx;
	this->coory = coory;
	this->coorz = coorz;
	this->dim = "tiene 3 dimensiones";
}
punto::punto(int coorx, int coory)
{
	this->coorx = coorx;
	this->coory = coory;
	this->coorz = NULL;
	this->dim = "tiene 2 dimensiones";
}
punto::punto()
{
	this->coorx = NULL;
	this->coory = NULL;
	this->coorz = NULL;
	this->dim = "No tiene dimensiones";
}
void punto::setx(int coorx)
{
	this->coorx = coorx;
}
void punto::sety(int coory)
{
	this->coory = coory;
}
void punto::setz(int coorz)
{
	this->coorz = coorz;
}
void punto::setdim(std::string dim)
{
	this->dim = dim;
}
int punto::getx()
{
	return this->coorx;
}
int punto::gety()
{
	return this->coory;
}
int punto::getz()
{
	return this->coorz;
}
std::string punto::getdim()
{
	return this->dim;
}