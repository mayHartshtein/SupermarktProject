#include "OtherMilk.h"

//the otherMilk CPP File
OtherMilk::OtherMilk()
{
	//4 for the milk priduct type ant for the other milk products
	this->_milkProType = 4;
	//sending for the set methods
	cout << "please enter the number of Non-dairy Components :";
	this->setNumOfNonDairy(this->_numOfNonDairy);
	//create the arry of the non dairy names
	this->_nonDairyNames = new string[this->_numOfNonDairy];
	for (int i = 0; i < this->_numOfNonDairy;i++)
	{
		cout << "please enter the " << i + 1 << "non dairy name :";
		cin >> this ->_nonDairyNames[i];
	}

	cout << "(other milk builed)" << endl;
}
//the method that calculate the milk product type price
float OtherMilk::CalculationPrice(int factor)
{
	float calc = Milk::CalculationPrice(factor);
	calc = calc + (this->_numOfNonDairy * 5);
	return calc;

}
//the method that printing the class information
void OtherMilk:: printInfo()const
{
	Milk::printInfo();
	for (int i = 0; i < this->_numOfNonDairy; i++)
	{
		cout << this->_nonDairyNames[i] << ",";
	}
	cout << "("<<this->_numOfNonDairy<< ") ";
}
//the set and get 
void OtherMilk::setNumOfNonDairy(int NumD)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfNonDairy;
		if (this->_numOfNonDairy<=0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfNonDairy<=0);
}
int OtherMilk:: getNumOfNonDairy()const
{
	return this->_numOfNonDairy;
}

//the distractor
OtherMilk::~OtherMilk()
{
	cout << "OtherMilk destroyed"<<endl;
}
