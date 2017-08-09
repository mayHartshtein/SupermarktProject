#pragma once
#include <iostream>
#include <string>
//the product class
using namespace std;
class Product
{
private:
	//variables
	int _serialNumber;
	char _placeRow;
	int _placeShelf;
	int _quantity;
	int _storArea;
protected:
	//the protected variable
	int _productType;
public:
	//the methods
	Product();//constractor
	virtual ~Product();//distractor
	//the virtual methods
	virtual float CalculationPrice(int factor);
	virtual void printInfo()const;
	//for tern the quntity
	void ternQuntity(int num);

	//sets and gets for the variables
	void setSerialNamber(int sNamber);
	int getSerialNumber()const;
	void setPlaceRow(char ch);
	char getPlaceRow()const;
	void setPlaceShelf(int s);
	int getPlaceShelf()const;
	void setQuntity(int q);
	int getQuntity()const;
	void setArea(int a);
	int getArea()const;
	void setProductType(int type);
	int getType()const;

};

