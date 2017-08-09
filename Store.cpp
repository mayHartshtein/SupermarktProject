#include "Store.h"
#include "Milk.h"
#include "Farm.h"
#include "Package.h"

//the store cpp file

Store::Store()
{
	this->_products = NULL;
	this->_factor = 0;
	this->_numOfProducts = 0;


}

//the menu for the all store
void Store::menu()
{
	int choice;
	while (1)
	{
		cout << "STORE MENU" << endl;
		
		cout << "1) Print all product" << endl;
		cout << "2) price of all product" << endl;
		cout << "3) Insert a new product" << endl;
		cout << "4) EXIT" << endl;
		cout << "your choice : ";
		cin >> choice;
		//in the cases i sending the choice for the methods
		switch (choice)
		{
		case 1:
			this->printStore();
			break;
		case 2:
			this->priceAllProduct();
			break;
		case 3:
			this->addProduct();
			break;
		case 4:
			cout << "bye" << endl;
			return;
			break;
		default:
			cout << "error,Please try again" << endl;
			break;
		}
	}
}
//the methods that builed the new product
void Store::addProduct()
{
		int choice;
		//create new arry for beackup the old arry
		Product ** tempArr = new Product*[this->_numOfProducts+ 1];
		for (int i = 0; i < this->_numOfProducts; i++)
			tempArr[i] = this->_products[i];
		//delete the old arry
		delete[] this->_products;
		//ask the user for deatails
		cout << "please enter the product type to add:"<<endl;
		cout << "(1)farm (2)milk (3)package" << endl;
		
		cin >> choice;
		//switch and case options
		switch (choice)
		{
		case 1://create a new farm
		{
				  int choice2 = 0;
				  cout << "please enter the farm type : (1)vegi (2) fruit :";
				  cin >> choice2;

				  switch (choice2)
				  {
				  case 1://create a new vagetable
					  tempArr[this->_numOfProducts] = new Vegetable;
					  break;
				  case 2://create a new fruit
					  tempArr[this->_numOfProducts] = new Fruit;
					  break;
				  default://the defait situation
					  tempArr[this->_numOfProducts] = new Farm;
					  break;
				  }
				  break;
		}
		case 2://create a new milk
		{
				  int choice2 = 0;
				  cout << "please enter the milk type : (1)drink (2) yogurt (3)cheese (4)other :";
				  cin >> choice2;

				  switch (choice2)
				  {
				  case 1://create a new milk
					  tempArr[this->_numOfProducts] = new Milk;//for drink
					  break;
				  case 2://create a new milk
					  tempArr[this->_numOfProducts] = new Milk;//for yogurt
					  break;
				  case 3://create a new cheese
					  tempArr[this->_numOfProducts] = new Cheese;
					  break;
				  case 4://create a new othermilk
					  tempArr[this->_numOfProducts] = new OtherMilk;
					  break;
				  default://the default situation
					  tempArr[this->_numOfProducts] = new Farm;//default
					  break;
				  }
				  break;

		}
		case 3://create a new package
			tempArr[this->_numOfProducts] = new Package;
			break;
		default://the default situation
			tempArr[this->_numOfProducts] = new Product;
			break;
		}
		this->_numOfProducts++;//rasing the size of the product
		this->_products = tempArr;//switch for the arry with the oldone how deleted
}
//the methods that printing the all products information
void Store::printStore()const
{
	cout << "the store name is :" << this->_storeName << endl;
	if (this->_numOfProducts == 0)
	{
		cout << "the store is empty !" << endl;
		return;
	}
	cout << "the factor variable is :" << this->_factor << endl;
	
	for (int i = 0; i < this->_numOfProducts; i++)
	{
		this->_products[i]->printInfo();
		cout << endl;
	}

	cout << "the price of all products in the store is :" << this->priceAllProduct();
	cout << endl;

}
//the methods that calculating the price of the all products in the store
float Store::priceAllProduct()const
{
	if (this->_numOfProducts == 0)
	{
		cout << "no product in the store" << endl;
		return 0;
    }
	float priceAllStore = 0;
	if (this->_numOfProducts == 0)
		return 0;
	for (int i = 0; i < this->_numOfProducts; i++)
		priceAllStore+=this->_products[i]->CalculationPrice(this->_factor);

	cout << "the price is :" << priceAllStore << endl;

	return priceAllStore;
}
//the methods that change the factor
void Store:: changeFactor(int factor)
{
	this->setFactor(factor);
}
//the distractor
Store::~Store()
{
	//delete the arry
	if (this->_numOfProducts != 0)
	{

		for (int i = 0; i < this->_numOfProducts; i++)
		{
			delete this->_products[i];
			this->_numOfProducts--;
		}

		delete[] this->_products;
	}
	cout << "(store destroyed)" << endl;
}


