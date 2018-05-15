#include<iostream>
#include<string>
#include "DVD.h"
using namespace std;
int i;
class dvdcollection
{
public:
	//null constructor
	dvdcollection()
	{
		this->totalcost = 0;
		this->index = 0;
		this->size = 5;
		list = new dvd[5];
	};
	//copy constructor
	dvdcollection(dvdcollection & clone)
	{
		this->totalcost = clone.totalcost;
		this->index = clone.index;
		this->list = clone.list;
		this->size = clone.size;
	};
	//parameterized constructor
	dvdcollection(float totalcost, dvd *list)
	{
		this->totalcost = totalcost;
		this->list = list;
	};
	//setters
	void settotalcost(float cost)
	{
		this->totalcost = cost;
	};
	void setindex(int index)
	{
		this->index = index;
	};
	void setlist(dvd *list)
	{
		this->list = list;
	};
	//getters
	float gettotalcost()
	{
		return this->totalcost;
	};
	int getindex()
	{
		return this->index;
	};

	void add(dvd &d)
	{
		if (index < size)
		{
			list[index] = d;
			index++;
		}
		else
		{
			incsize(d);
		}
		this->totalcost += d.getprice();
	};
	void display()
	{

		cout << " MY DVD COLLECTION " << endl;
		for (i = 0; i<index; i++)
		{
			cout << this->list[i] << endl;
		}
		cout << "Total Cost of DVDs :" << this->totalcost << endl;
	};
	//search function
	int search(string  name)
	{
		dvd d1;
		int temp = 0;
		for (i = 1; i <= index; i++)
		{
			d1 = this->list[i - 1];
			if (name == d1.getname())
			{
				temp = i;
				break;
			}
		}
		return temp;
	};
	float search(float cost)
	{
		dvd d1;
		int temp = 0;
		for (i = 1; i <= index; i++)
		{
			d1 = this->list[i];
			if (cost == d1.getprice())
			{
				temp = i;
				break;
			}
		}
		return temp;
	};
	//delete function
	void Delete(string name)
	{
		int temp = search(name);
		if (temp > 0)
		{
			for (i = temp - 1; i < index - 1; i++)
			{
				this->list[i] = this->list[i + 1];
			}
			index--;
		}
		else
		{
			cout << "Not found!!" << endl;
		}
	};

protected:
	//increase function
	void incsize(dvd &d)
	{
		size = size * 2;
		dvd *newlist = new dvd[size];
		for (i = 0; i < (size / 2); i++)
		{
			newlist[i] = list[i];
		}
		delete[] list;
		list = newlist;
		list[index] = d;
		index++;
	};


private:
	float totalcost;
	dvd *list;
	int size;
	int index;
}; 
