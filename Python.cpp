// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#include "Python.h"

Python::Python() : Reptile()
{
  length = 0;  
}

Python::Python(const char* name) : Reptile(name)
{
  length = 0;  
}

Python::Python(const char* n, const GenderType& gt, double fc, double lf, double l) 
: Reptile(n, gt, fc, lf, Carnivore, LiveMice, water)
{
  length = l;  
}

Python::Python(const Python& P) : Reptile(P)
{
	length = P.length;
}

Python::~Python() {}

Python& Python::operator=(const Python& P)
{
	Reptile::operator=(P);
	length = P.length;
  return *this;
}

double Python::get() const
{
	return length;
}

void Python::setLength(double L)
{
 length = L; 
}

bool Python::inRange() const
{
	return ( length>= 15 && length <= 23);
}

void Python::Display() const
{
	Reptile::Display();
	cout << "Python is " << ((inRange()) ? "an acceptable length.": "not an acceptable length." ) << endl;
}

void Python::CageMaintenance() const 
{
	cout << "Remove python, clean food scraps, put python back in cage." << endl;
}
