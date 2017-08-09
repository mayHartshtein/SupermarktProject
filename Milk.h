#pragma once
#include "Product.h"
//the milk class
class Milk :public Product
{
private:
	//the variable
	string _milkProName;
	int _numOfColors;
	float _fat;

protected:
	//the protected variable
	int _milkProType;

public:
	//the methods
	Milk();//constractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;

	//the sets end gets for the variables
	void setNumOfColors(int n);
	int getNumOfColors()const;
	void setFat(float fat);
	float getFat()const;
	void setMilkProType(int type);
	int getMilkProType()const;

	~Milk();//distractor
};

