#pragma once
#include "Product.h"
//the package class
class Package : public Product
{
private:
	//the variables
	int _numOfProduct;
	string *_productName;
	int _numOfColors;


public:
	//the mathods
	Package();//constractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;
	//the setd end gets for the variables
	void setNumOfPro(int num);
	int getNumOfPro()const;
	void setNumOfColors(int NC);
	int getNumOfColors()const;

	virtual ~Package();//distractor
};

