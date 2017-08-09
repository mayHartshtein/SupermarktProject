#include "Fruit.h"

//the fruit cpp file
Fruit::Fruit()
{
	//sending the variable to the set method
	this->_vegiType = 2;
	cout << "please enter the amount of sugar :";
	this->setSugar(this->_amountOfSugar);


	cout << "(fruit builed)" << endl;

}
//the methods that calculate the product price
float Fruit:: CalculationPrice(int factor)
{
	float calc = Farm::CalculationPrice(factor);
	calc = calc + (this->_amountOfSugar / 2);

	return calc;
}
//the method that printing the class information
void Fruit::printInfo()const
{
	Farm::printInfo();
	cout <<"("<< this->_amountOfSugar<<") ";
}

//the set and get for the variable
void Fruit::setSugar(int s)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_amountOfSugar;
		if (this->_amountOfSugar<0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_amountOfSugar<0);

}
int Fruit::getSugar()const
{
	return this->_amountOfSugar;
}
//the distractor
Fruit::~Fruit()
{
	cout << "fruit destroyed"<<endl;
	
}
