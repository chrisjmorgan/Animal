// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#ifndef MAMMAL_H_CJM
#define MAMMAL_H_CJM

#include <iostream>
#include "animal.h"


class Mammal: public Animal
{
  double bodyTemp;
  double tempHigh;
  double tempLow;

public:


  Mammal();
  Mammal(const char* );
  Mammal(const char* n, const GenderType& gt,
         double fc, double lf, const DietType& dt,
         const FeedType& ft, double bt, double tmpH, double tmpL);
  Mammal(const Mammal& );

  ~Mammal();
	
	Mammal& operator= (const Mammal&);

  double getBodyTemp() const;
  void updateBodyTemp(double );
  bool inRange() const;
  void Display() const;

	void CageMaintenance() const
	{
		cout << "Give food and water, Make sure no children fall in." << endl;
	}
};
#endif
