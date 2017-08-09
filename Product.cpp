#include "Product.h"
//the cpp file for the product class

//the constractor
Product::Product()
{

	//sending all the variables to the sets mathods
	cout << "please enter the serial number of the product :";
	this->setSerialNamber(this->_serialNumber);

	
	cout << "please enter the row place between A-Z :";
	this->setPlaceRow(this->_placeRow);
	
	cout << "please enter the shelf place between 1-5 :";
	this->setPlaceShelf(this->_placeShelf);

	cout << "please enter the quntity of the product :";
	this->setQuntity(this->_quantity);

	cout << "please enter the type of the product :" << endl;
	cout << "(1) farm (2) milk (3) package ";
	this->setProductType(this->_productType);
	
	cout << "please enter the priduct area :"<<endl;
	cout << "(3) Multiple Exposure (2) Medium exposure (1) Hidden ";
	this->setArea(this->_storArea);


	cout << "(product builed)" << endl;


}
//the mathod that print the infprmation of the product class
void Product::printInfo()const
{
	cout << this->_serialNumber<<" ";
	cout << this->_placeRow << "-" << this->_placeShelf<<" ";
	cout << "(" << this->_quantity << "," << this->_productType << "," << this->_storArea<<") ";

}
//the method that change the quntity
void Product::ternQuntity(int num)
{
	if (num < 0)
		throw "quntity can't be negative";
		this->_quantity = num;
}
//the method that calculate the all price
float Product::CalculationPrice(int factor)
{
	float price;
	price = (this->_quantity)*(this->_storArea)*(factor);
	return price;
}
//the all sets and gets for the variables
void Product:: setSerialNamber(int sNamber)
{
	//Reception of data from the user until the correct input
	do 
		{
			cin >> this->_serialNumber;
			if (this->_serialNumber <= 0)
			{
				cout << "please try again:";
				cout << endl;
				}

		} while (this->_serialNumber <= 0);
	}

int Product::getSerialNumber()const
{
	return this->_serialNumber;
}

void Product:: setPlaceRow(char ch)
{
	//change the letter to big lettr
	cin >> this->_placeRow;
	if (this->_placeRow >= 92 && this->_placeRow <= 172)
		this->_placeRow -= 32;
}

char Product::getPlaceRow()const
{
	return this->_placeRow;
}
void Product ::setPlaceShelf(int s)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_placeShelf;
		if (this->_placeShelf <= 0|| this->_placeShelf>5)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_placeShelf <= 0 || this->_placeShelf>5);
}

int Product ::getPlaceShelf()const
{
	return this->_placeShelf;
}


void Product::setQuntity(int q)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_quantity;
		if (this->_quantity< 0)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_quantity < 0);
}

int Product :: getQuntity()const
{
	return this->_quantity;
}
void Product:: setArea(int a)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_storArea;
		if (this->_storArea<1 || this->_storArea>3)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_storArea<1 || this->_storArea>3);

}


int Product:: getArea()const
{
	return this->_storArea;
}
void Product::setProductType(int type)
{
	//Reception of data from the user until the correct input
	do
	{
		cin >> this->_productType;
		if (this->_productType<1 || this->_productType>3)
		{
			cout << "please try again:";
			cout << endl;
		}

	} while (this->_productType<1 || this->_productType>3);


}
int Product:: getType()const
{
	return this->_productType;
}


//the distractor
Product::~Product()
{
	cout << "product destroyed"<<endl;
}
