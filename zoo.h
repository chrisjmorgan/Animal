// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#ifndef ZOO_H_CJM
#include <iostream>
#include "animal.h"
#include "bird.h"
#include "eagle.h"

using namespace std;

const unsigned MAX_ZOO = 5;

class Zoo
{
	Animal* _zoo[MAX_ZOO];
  unsigned _num;
	void add();
	void feed();
	void cage();
public:
	Zoo();
	~zoo();
	void Run();
};

#endif

