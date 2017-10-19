// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#include "Mammal.h"

Mammal::Mammal(): Animal()
{

}

Mammal::Mammal(const char* name): Animal(name) {}

Mammal::Mammal(const char* n, const GenderType& gt,
		           double fc, double lf, const DietType& dt,
							 const FeedType& ft, double bt, double tmpH, double tmpL)
:Animal(n, gt, fc, lf, dt, ft)
{
	bodtTemp = bt;
	tempHigh = tmpH;
	tempLow = tmpL;
}

Mammal::Mammal(const Mammal& M): Animal(M)
{

}
double Mammal::getBodyTemp()
{
  return bodyTemp;
}

