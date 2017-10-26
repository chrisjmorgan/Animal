// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#include "Crocodilia.h"

Crocodilia::Crocodilia() : Reptile()
{
  croc = CrocTypeUnknown;  
}

Crocodilia::Crocodilia(const char* name) : Reptile(name)
{
  croc = CrocTypeUnknown;  
}

Crocodilia::Crocodilia(const char* n, const GenderType& gt, double fc, double lf, double l) 
: Reptile(n, gt, fc, lf, Carnivore, RawMeat, water)
{
  croc = CrocTypeUnknown; 
}

Crocodilia::Crocodilia(const Crocodilia& C) : Reptile(C)
{
	croc = C.croc;
}

Crocodilia::~Crocodilia() {}

Crocodilia& Crocodilia::operator=(const Crocodilia& C)
{
	Reptile::operator=(C);
  croc = C.croc;
  return *this;
}

crocType Crocodilia::getType() const
{
	return croc;
}

void Crocodilia::setType(crocType C)
{
 croc = C; 
}

void Crocodilia::Display() const
{
	Reptile::Display();
	cout << "This type of croc is an ";
	switch (croc) {
		case CrocTypeUnknown : cout << "unknown type.";break;
		case Crocodile : cout << "crocodilia.";break;
	  case Alligator : cout << "alligator.";break;
		case Caiman : cout << "caiman.";break;
		case Gharial : cout << "gharial.";break;  
	}
}

void Crocodilia::CageMaintenance() const 
{
	cout << "Remove croc, clean food scraps, put croc back in cage." << endl;
}

