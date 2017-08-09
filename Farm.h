#pragma once
#include "Product.h"

//the farm class
class Farm :public Product
{
private:
	//the variables
	string _farmProName;
	int _numOfSeason;
	int _numOfSapack;
protected:
	//the protected variable
	int _vegiType;
public:
	//the methods
	Farm();//constractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;

	//the sets and gets methods
	string getFarmProName()const;
	void setNumSeasons(int num);
	int getNumSeasons()const;
	void setNumOfSapak(int n);
	int getNumOfSapak()const;
	void setVegiType(int v);
	int getVegiType()const;
	~Farm();//distractor
};

