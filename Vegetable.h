#pragma once
#include "Farm.h"
//the vegetable class
class Vegetable :	public Farm
{
private:
	//the variable
	int _numOfVitamins;

public:
	Vegetable();//constractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;
	//set and get for the variable
	void setVitamins(int vit);
	int getVitamins()const;
	~Vegetable();//distractor
};

