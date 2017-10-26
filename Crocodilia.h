// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#ifndef CROCODILIA_H_CJM
#define CROCODILIA_H_CJM

#include <iostream>
#include "Reptile.h"
using namespace std;

enum crocType {CrocTypeUnknown, Crocodile, Alligator, Caiman, Gharial};

class Crocodilia : public Reptile 
{

  crocType croc;

public:

	Crocodilia();
	Crocodilia(const char* n);
	Crocodilia(const char* n, const GenderType& gt, double fc, double lf, double length);
	Crocodilia(const Crocodilia&);

	~Crocodilia();

	Crocodilia& operator=(const Crocodilia&);

	crocType getType() const;

	void setType(crocType);

	void Display() const;

	void CageMaintenance() const;




};

#endif
