/*
 * Lab1.cpp
 *
 *  Created on: Sep 11, 2017
 *      User: jclay
 *		Author: Jacob Claytor
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream myReadFile;
	string fileName;
	double val1, val2, val3, val4;
	int count = 2;

	cout << "Please enter the name of the file that you wish to open or type -9999 to quit." << endl;
	getline(cin, fileName);
	cout << "File name entered: " << fileName << endl;
	myReadFile.open(fileName.c_str());
	if (!myReadFile.fail())
	{
		cout << "File has been opened." << endl;
		myReadFile >> val1;
		myReadFile >> val2;
		while (!myReadFile.eof() && myReadFile >> val4)
		{
			count++;
		}

		myReadFile.clear();
		myReadFile.seekg(0, myReadFile.beg);

		for(int j=0; j<count-1; j++)
		{
			myReadFile >> val3;
		}
		cout << "There are a total of " << count << " values in this file." << endl;
		cout << "The first value in this file is: " << val1 << endl;
		cout << "The second value in this file is: " << val2 << endl;
		cout << "The second to last value in this file is: " << val3 << endl;
		cout << "The last value in this file is: " << val4 << endl;

	}
	else
	{
		cout << "File name not found." << endl;
	}
	return 0;
}

//myReadFile.clear();
//myReadFile.seekg(0, myReadFile.beg);


