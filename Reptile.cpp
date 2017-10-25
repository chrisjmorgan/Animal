// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#include "Reptile.h"

Reptile::Reptile():Animal()
{
	type = land;
}

Reptile::Reptile(const char* name):Animal(name)
{
	type = land;
}

Reptile::Reptile(const char* n, const GenderType& gt,
		double fc, double lf, const DietType& dt,
		const FeedType& ft, const Environment& T)
:Animal(n, gt, fc, lf, dt, ft)
{
	type = T;
}

Reptile::Reptile(const Reptile& R)
:Animal(R)
{
	type = R.type;
}

Reptile::~Reptile() {}

Reptile& Reptile::operator= (const Reptile& R)
{
	Animal::operator=(R);
	type = R.type;
	return *this;
}

Environment Reptile::getType() const
{
	return type;
}

void Reptile::updateType(const Environment& T)
{
	type = T;
}
