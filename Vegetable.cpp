#include "Vegetable.h"

//the vegetable cpp file
Vegetable::Vegetable()
{
	//setding the variable toe the set method
	this->_vegiType = 1;
	cout << "please enter the number of vitamins :";
	this->setVitamins(this->_numOfVitamins);

	cout << "(vegetable builed)" << endl;
}
//the virtual method the calculate the all pricr of the product
float Vegetable::CalculationPrice(int factor)
{
	float calc = Farm::CalculationPrice(factor);
	calc = calc + (this->_numOfVitamins * 2);
	return calc;
}
//the method that pronting the class information
void Vegetable::printInfo()const
{
	Farm::printInfo();
	cout <<"("<< this->_numOfVitamins<< ") ";
}

void Vegetable:: setVitamins(int vit)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfVitamins;
		if (this->_numOfVitamins<0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfVitamins<0);
}
int Vegetable::getVitamins()const
{
	return this->_numOfVitamins;
}

//the distractor
Vegetable::~Vegetable()
{
	cout << " vegetable destroyed"<<endl;
}
