#include "Farm.h"

//the constractor
Farm::Farm()
{
	//sending the variables to the sets methods
	this->_productType = 1;
	cout << "please enter the name of farm product :";
	cin >> this ->_farmProName;

	cout << "please enter the number of seasons for the product between 1-4:";
	this->setNumSeasons(this->_numOfSeason);

	
	cout << "please enter the number of sapackim :";
	this->setNumOfSapak(this->_numOfSapack);

	cout << "please enter the vegi type :" << endl;
	cout << "(1)vegetable (2)fruit ";
	this->setVegiType(this->_vegiType);

	cout << "(farm builed)" << endl;
}
//the virtual method that calculate the all price of the product
float Farm:: CalculationPrice(int factor)
{
	float calc;
	calc = Product::CalculationPrice(factor);
	calc = (calc * 3 * (5 - this->_numOfSeason)) + (this->_numOfSapack * 5) + this->_vegiType;
	return calc;
}
//the methot that printing the information of the variables
void Farm::printInfo()const
{
	
	Product::printInfo();
	cout << this->_farmProName;
	cout << "(" << this->_vegiType << "," << this->_numOfSeason << "," << this->_numOfSapack << ") ";
}

//the sets ang gets for the variables

string Farm:: getFarmProName()const
{
	return this->_farmProName;
}
void Farm:: setNumSeasons(int num)
{	
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfSeason;
		if (this->_numOfSeason<1 || this->_numOfSeason>4)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfSeason<1 || this->_numOfSeason>4);
	
}
	
int Farm::getNumSeasons()const
{
	return this->_numOfSeason;
}
void Farm::setNumOfSapak(int n)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_numOfSapack;
		if (this->_numOfSapack<1)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_numOfSapack<1);
	
}

int Farm:: getNumOfSapak()const
{
	return this->_numOfSapack;
}

void Farm::setVegiType(int v)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_vegiType;
		if (this->_vegiType<1||this->_vegiType>2)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_vegiType<1 || this->_vegiType>2);

}
int Farm::getVegiType()const
{
	return this->_vegiType;
}

//the distractor
Farm::~Farm()
{
	cout << "farm destrioyed"<<endl;
}
