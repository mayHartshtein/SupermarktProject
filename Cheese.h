#pragma once
#include "Milk.h"
//the cheese class
class Cheese :public Milk
{
private:
	//the variable
	int _numOfAdditions;

public:
	//the methods
	Cheese();//constractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;
	//the set and get for the variable
	void setNumOfAdd(int add);
	int getNumOfAdd()const;
	~Cheese();//distractor
};

