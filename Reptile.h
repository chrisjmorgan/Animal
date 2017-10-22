// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#ifndef REPTILE_H_CJM
#define REPTILE_H_CJM

#include <iostream>
#include "animal.h"
using namespace std;

enum EnvironmentType {water, land};

class Reptile: public Animal
{
  Environment type; 
  

public:

	Reptile();
	Reptile(const char* );
	Reptile(const char* n, const GenderType& gt,
			double fc, double lf, const DietType& dt,
			const FeedType& ft, Environment T);
	Reptile(const Reptile& );

	~Reptile();

	Reptile& operator= (const Reptile&);

	Environment Reptile::getType() const;
	void Reptile::updateType(Environment E);

};
#endif


