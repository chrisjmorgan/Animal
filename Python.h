// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12
#ifndef PYTHON_H_CJM
#define PYTHON_H_CJM
#include <iostream>
#include "Reptile.h"
using namespace std;

class Python : public Reptile
{ 

	double length;

public:

	Python();
	Python(const char* n);
	Python(const char* n, const GenderType& gt, double fc, double lf, double length);
	Python(const Python&);

	~Python();

	Python& operator=(const Python&);

	double get() const;
	void setLength(double);

	void Display() const;

	void CageMaintenance() const;

  bool inRange() const;





};


#endif
