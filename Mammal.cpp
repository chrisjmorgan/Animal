// Christopher Morgan
// CISP 400 TUES/THURS
// PROJECT 4
// 2017-10-12

#include <iostream>
#include "Mammal.h"
using namespace std;

Mammal::Mammal(): Animal()
{

}

Mammal::Mammal(const char* name): Animal(name) {}

Mammal::Mammal(const char* n, const GenderType& gt,
		double fc, double lf, const DietType& dt,
		const FeedType& ft, double bt, double tmpH, double tmpL)
:Animal(n, gt, fc, lf, dt, ft)
{
	bodyTemp = bt;
	tempHigh = tmpH;
	tempLow = tmpL;
}

Mammal::Mammal(const Mammal& M): Animal(M) {}

Mammal::~Mammal() {}

Mamaml& Mammal::operator= (const Mammal& M)
{
	Animal::operator=(M);
	bodyTemp = M.bodyTemp;
	tempHigh = M.tempHigh;
	tempLow = M.tempLow;
}

double Mammal::getBodyTemp()
{
	return bodyTemp;
}

void Mammal::updateBodyTemp(double C)
{
	bodyTemp = C;	
}

bool Mammal::inRange()
{
	return (bodyTemp >= tempLow && bodyTemp <= tempHigh);
}

void Mammal::Display()
{
	Animal::Display();
	cout << "Temperature in range: " << inRange() ? "Yes" : "No" << endl;
}


