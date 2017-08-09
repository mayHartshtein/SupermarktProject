#pragma once
#include "Farm.h"
//the fruit class
class Fruit :public Farm
{
private:
	//the variable
	int _amountOfSugar;

public:
	//the methods
	Fruit();//constractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;
	//the get and set for the variable
	void setSugar(int s);
	int getSugar()const;
	~Fruit();//distractor
};

