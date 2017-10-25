// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#ifndef SKUNK_H_CJM
#define SKUNK_H_CJM

#include <iostream>
#include "Mammal.h"
using namespace std;

class Skunk : public Mammal
{
  bool descented;


public:
	Skunk();
	Skunk(const char*);
	Skunk(const char* n, const GenderType& gt,
			double fc, double lf, const DietType& dt,
			const FeedType& ft, bool smelly, double bt);
	Skunk(const Skunk&);

	~Skunk();

	Skunk& operator=(const Skunk&);

  bool isSmelly() const;
	void isSmelly(bool);



};

#endif
