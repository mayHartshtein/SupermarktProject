#include "Package.h"

//the package cpp file
Package::Package()
{
	//sending to the sets methods
	this->_productType = 3;
	cout << "please enter the number of the product in the package :";
	this->setNumOfPro(this->_numOfProduct);
	//for the all product names
	this->_productName = new string[this->_numOfProduct];//create the arry of products name
	for (int i = 0; i < this->_numOfProduct; i++)
	{
		cout << "please enter the " << i + 1 << "product :";
		cin >> this->_productName[i];
	}
	
	cout << "please enter the numbers of color in the package:";
	this->setNumOfColors(this->_numOfColors);

	cout << "(package builed)" << endl;
}


float Package:: CalculationPrice(int factor)
{
	float calc = Product::CalculationPrice(factor);
	calc = calc * 2 * (this->_numOfProduct)*((this->_numOfColors) / 3);

	return calc;

}
//the method that printing the class information
void Package:: printInfo()const
{
	Product::printInfo();
	for (int i = 0; i < this->_numOfProduct; i++)
	{
		cout << this->_productName[i] << ",";
	}
	cout << "(" << this->_numOfProduct << "," << this->_numOfColors <<") ";
}
//the sets and gets methods
void Package::setNumOfPro(int num)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfProduct;
		if (this->_numOfProduct<=0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfProduct<=0);

}
int Package::getNumOfPro()const
{
	return this->_numOfProduct;
}
void Package::setNumOfColors(int NC)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfColors;
		if (this->_numOfColors <= 0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfColors <= 0);
}
int Package::getNumOfColors()const
{
	return this->_numOfColors;
}

//the distractor
Package::~Package()
{
	//delete the arry of products names
	if (this->_numOfProduct != 0)
	{
		for (int i = 0; i < this->_numOfProduct; i++)
		{
			delete [] this->_productName;
		}
	}
	cout << "package destroyed"<<endl;
}
