// DVD collection.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "DvDCollection.h"
using namespace std;
int main()
{
	dvdcollection d1;
	d1.add(*(new dvd("Hercules", 200)));
	d1.add(*(new dvd("Jumanji", 180)));
	d1.add(*(new dvd("Windows 10", 100)));
	d1.add(*(new dvd("Games of Thrones", 250)));
	d1.add(*(new dvd("NEED FOR SPEED", 150)));
	d1.add(*(new dvd("gta san andreas", 120)));
	d1.add(*(new dvd("The Amazing Spider-Man", 250)));
	d1.display();
	cout << endl << "Index :" << d1.search(100) << endl;
	d1.Delete("gta san andreas");
	d1.display();
	system("pause");

};
