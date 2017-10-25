// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#include <iostream>
#include "animal.h"
using namespace std;

#ifndef ELEPHANT_H_CJM
#define ELEPHANT_H_CJM

class Elephant(): public Animal
{
	double weightInLBS;  


public:

	Elephant();
	Elephant(const char*);
	Elephant(const char* n, const GenderType& gt,
			double fc, double lf, const DietType& dt,
			const FeedType& ft, double);
	Elephant(const Elephant&);

	~Elephant();

	Elephant& operator=(const Elephant&);

	double getWeight() const;
	void setWeight(double);
	bool inRange() const;
	void Display() const;

	void CageMaintenance() const
	{
		cout << "Replace food and water. Clean feces." <<endl;
	}
};
#endif
