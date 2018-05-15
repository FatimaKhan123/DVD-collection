#include<iostream>
using namespace std;
class dvd
{
public:
	//null constructor
	dvd()
	{
		string name = " ";
		float price = 0;
	};
	//copy constructor
	dvd(dvd & clone)
	{
		this->name = clone.name;
		this->price = clone.price;
	};
	//parameterized constructor
	dvd(string name, float price)
	{
		this->name = name;
		this->price = price;
	};
	//setters
	void setname(string name)
	{
		this->name = name;
	};
	void setprice(float price)
	{
		this->price = price;
	};
	//getters
	string getname()
	{
		return this->name;
	};
	float getprice()
	{
		return this->price;
	};
	void display()
	{
		cout << "Name :" << this->name << endl << "price :" << this->price << endl;

	};

private:
	string name;
	float price;
};
//insertion operator

ostream& operator <<(ostream& o, dvd& S)
{
	return o << "Name :" << S.getname() << endl << "DvD price :" << S.getprice() << endl;
}; 
