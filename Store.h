#pragma once
#include <iostream>
#include <string>
#include "Product.h"
#include "Milk.h"
#include "Farm.h"
#include "Package.h"
#include "Fruit.h"
#include "OtherMilk.h"
#include "Vegetable.h"
#include "Cheese.h"

using namespace std;
//the store class
class Store
{
private:
	//the variables
	string _storeName;
	int _factor;
	int _numOfProducts;
	Product ** _products;

public:
	Store();//constractor

	void setStoreName(char* StoreName)
	{
		this->_storeName = StoreName;
	}
	string getStoreName()const
	{
		return this->_storeName;
	}
	//set and get for the factor
	void setFactor(int factor)
	{
		this->_factor = factor;
	}
	int getFactor()const
	{
		return this->_factor;
	}
	//the menu for the store
	void menu();
	//for printing the all products information
	void printStore()const;
	//to add new product
	void addProduct();
	//to cange the factor
	void changeFactor(int factor);
	//the price of all products
	float priceAllProduct()const;
	~Store();//distractor
};

