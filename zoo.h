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
public:
	Zoo();
	~zoo();
	void Run();
};

#endif

