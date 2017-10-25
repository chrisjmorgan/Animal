// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#include <Elephant.h>

Elephant::Elephant()
{
	weightInLBS = 0;
}

Elephant::ELephant(const char* name):Animal(name)
{
	weightInLBS = 0;
}

Elephant::Elephant(connt char* n. const GenderType* gt,
		double fc, double lf, const DietType& dt,
		const FeedType& ft, double lbs)
	:Mammal(n, gt, fc, lf, Hey, Herbivore, temp, 98, 97)
{
	weightInLBS = lbs;
}

Elephant::Elephant(const Elephant& E):Mammal(E)
{
	weightInLBS = E.weightInLBS;
}

Elephant::~Elephant() {}


