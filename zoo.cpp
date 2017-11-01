// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12


#include "zoo.h"
#include <string.h>

char main_menu()
{
	cout << :
}




Zoo::Zoo() : _num(-1)
{
	for (unsigned i = 0; i < MAX_ZOO; ++i)
		_zoo[i] = NULL;

}

Zoo::~Zoo()
{
	if (_num != -1)
	{
		{

			for (unsigned i = 0; i<_num; ++i)
				delete _zoo[i];a
					zoo[i] = NULL;
		}
		_num = -1;
	}
}

void Zoo::Run()
{

	bool exit = false;
	char choice;

	cout << "Simulation starting.." << endl << endl;

	while (!exit)
	{
		cout << "Please make a selection, your choices are:" << endl;
		cout << "[a] - Add a new animal to the zoo." << endl;
		cout << "[d] - Display all animals in zoo." << endl;
		cout << "[f] - Display feeding procedures." << endl;
		cout << "[m] - Display cage maintenance procedures." << endl;
		cout << "[q] - Exit the simulation." << endl;
		cin >> choice;
		cout << endl;

		switch (choice)
		case 'a':add();break;
		case 'd':if (_num = -1)
						 {
							 for (int i = 0; i <= _num; ++i)
								 _zoo[i]->
						 }
	}









	//char choice = main_menu();
	//while (true) 
	//{


	//	switch (choice)
	//	{
	//		case ('1'): add();break;
	//		case('2'): feed();break;
	//		case('3'): cage();break;
	//	}

}

void Zoo::add()
{
	if (_num >= MAX_ZOO)
		cout << "The zoo is full."<< endl;
	else 

	{
		{
			char name[20];
			strcpy(name,"Eagle  ");
			static char c('A');
			name[7] = c++;
			_zoo[_num++] = new Eagle(name);
		}
	}

	void Zoo::feed()
	{


	}

	void Zoo::cage()
	{

	}

	void Zoo::Display()
	{
		if (_num == 0 )
			cout << "The zoo is empty.";
		else (unsigned i = 0; i < _num; ++i)
			_zoo[i]->Display();







	}
