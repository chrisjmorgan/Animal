// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#include "Elephant.h"


Elephant::Elephant()
{
	weightInLBS = 0;
}

Elephant::Elephant(const char* name):Mammal(name)
{
	weightInLBS = 0;
}

Elephant::Elephant(
		const char* n, const GenderType& gt,
		double fc, double lf, const DietType& dt,
		const FeedType& ft, double lbs, double bodytemp)
:Mammal(n, gt, fc, lf, Herbivore, Hay, bodytemp, 98, 97)
{
	weightInLBS = lbs;
}

Elephant::Elephant(const Elephant& E):Mammal(E)
{
	weightInLBS = E.weightInLBS;
}

Elephant::~Elephant() {}

Elephant& Elephant::operator=(const Elephant& E)
{
	Mammal::operator=(E);
	weightInLBS = E.weightInLBS;
	return *this;
}

double Elephant::getWeight() const
{
	return weightInLBS;
}

void Elephant::setWeight(double W)
{
	weightInLBS = W;
}

bool Elephant::inRange() const
{
	return (weightInLBS >= 12000 && weightInLBS <= 15000);
}

void Elephant::Display() const
{
	Mammal::Display();
	cout << "The weight is:" << getWeight() << ". And it is "<< (inRange() ? "in range":"not in range") << endl;
}


