// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#include "Skunk.h"

Skunk::Skunk()
{
	descented = TRUE;
}

Skunk::Skunk(const char* n)
{
  descented = TRUE
}

Skunk::Skunk(const char* n, const GenderType& gt,
		double fc, double lf, const DietType& dt,
		const FeedType& ft, bool smelly)
	:Mammal(n, gt, fc, lf, Omnivore, GrubsNGrass)
{
	descented = smelly
}

Skunk::Skunk(const Skunk& S):Mammal(S)
{
	descented = S.descented;
}

Skunk::~Skunk() {}

Skunk& k

