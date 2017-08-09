#include "Cheese.h"


Cheese::Cheese()
{
	//3 for milk fro type and cheese
	this->_milkProType = 3;
	//sending to the set method
	cout << "please enter the number of Extras cheese :";
	this->setNumOfAdd(this->_numOfAdditions);

	cout << "(cheese builed)" << endl;
}
//the method that calculate the cheese product price
float Cheese:: CalculationPrice(int factor)
{
	float calc = Milk::CalculationPrice(factor);
	calc += this->_numOfAdditions;

	return calc;
}
//the method that printing the all class information
void Cheese::printInfo()const
{
	Milk::printInfo();
	cout << "("<<this->_numOfAdditions<< ") ";
}
//the set and get
void Cheese::setNumOfAdd(int add)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfAdditions;
		if (this->_numOfAdditions<0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfAdditions<0);
}
int Cheese::getNumOfAdd()const
{
	return this->_numOfAdditions;

}
//the distractor
Cheese::~Cheese()
{
	cout << "cheesse destroyed" << endl;
}
