// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#include "Skunk.h"

Skunk::Skunk()
{
	descented = true;
}

Skunk::Skunk(const char* n)
{
	descented = true;
}

Skunk::Skunk(const char* n, const GenderType& gt,
		double fc, double lf, const DietType& dt,
		const FeedType& ft, bool smelly, double bodytemp)
:Mammal(n, gt, fc, lf, Omnivore, GrubsNGrass, bodytemp, 97,95)
{
	descented = smelly;
}

Skunk::Skunk(const Skunk& S):Mammal(S)
{
	descented = S.descented;
}

Skunk::~Skunk() {}

Skunk& Skunk::operator=(const Skunk& S)
{
	Mammal::operator=(S);
	descented = S.descented;
	return *this;
}



