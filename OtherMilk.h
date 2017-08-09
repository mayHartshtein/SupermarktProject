#pragma once
#include "Milk.h"
//the otherMilk class
class OtherMilk :public Milk
{
private:
	//the variables
	int _numOfNonDairy;
	string * _nonDairyNames;
public:
	//the methods
	OtherMilk();//constractor
	//the vitrual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;
	//the set and get for the variable
	void setNumOfNonDairy(int NumD);
	int getNumOfNonDairy()const;
	~OtherMilk();//distractor
};

