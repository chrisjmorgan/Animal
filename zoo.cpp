#include "zoo.h"

char main_menu()
{
	cout << :
}




Zoo::Zoo()
{
  for (unsigned i = 0; i < MAX_ZOO; ++i)
		_zoo[i] = NULL;
	_num = 0;
}

Zoo::~Zoo()
{
  for (unsigned i = 0; i<_num; ++i)
		delete _zoo[i];
	_num = 0;
}

void Zoo::Run()
{

}
