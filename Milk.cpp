#include "Milk.h"
//the milk cpp file

Milk::Milk()
{
	//2 for milk type
	this->_productType = 2;
	cout << "please enter the milk product name :";
	cin >> this->_milkProName;
	//sending to the sets methods
	cout << "please enter the milk product type : (1) drink (2) yoogurt (3)cheese (4)other :" << endl;
	this->setMilkProType(this->_milkProType);

	cout << "please enter the number of colors of milk product :";
	this->setNumOfColors(this->_numOfColors);
	
	cout << "please enter the fat of the milk product :";
	this->setFat(this->_fat);
	cout << endl;

	cout << "(milk builed)" << endl;
}
//the method that calculate the all product price
float Milk:: CalculationPrice(int factor)
{
	float calc = Product::CalculationPrice(factor);
	calc = (calc + this->_numOfColors - this->_fat)*this->_milkProType;

	return calc;

}
//the method that printing the class information
void Milk:: printInfo()const
{
	Product::printInfo();
	cout << this->_milkProName << " ";
	cout << "(" << this->_milkProType << "," << this->_numOfColors << "," << this->_fat<<") ";
}
//the sets and gets methods
void Milk::setNumOfColors(int n)
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
int Milk::getNumOfColors()const
{
	return this->_numOfColors;
}
void Milk::setFat(float fat)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_fat;
		if (this->_fat< 0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_fat < 0);

}
float Milk::getFat()const
{
	return this->_fat;
}
void Milk::setMilkProType(int type)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_milkProType;
		if (this->_milkProType <1||this->_milkProType>4)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_milkProType <1 || this->_milkProType>4);

}
int Milk:: getMilkProType()const
{
	return this->_milkProType;
}

//the distractor
Milk::~Milk()
{
	cout << "milk destroyed"<< endl;
}
