
#include <string>
class punto
{
public:
	punto(int,int,int);
	punto(int, int);
	punto();
	void setx(int);
	void sety(int);
	void setz(int);
	void setdim(std::string);
	int getx();
	int gety();
	int getz();
	std::string getdim();

private:
	int coorx;
	int coory;
	int coorz;
	std::string dim;
};