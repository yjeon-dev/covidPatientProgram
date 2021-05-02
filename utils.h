//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#ifndef SDDS_UTILS_H_
#define SDDS_UTILS_H_
#include <iostream>
#include <string>
using namespace std;
namespace sdds
{
	int getInt();
	int getTime();
	bool is_number(const string& s);
	extern bool debug;

	template <typename type>
	void removeDynamicElement(type* array[], int index, int& size) 
	{
		delete array[index];
		for (int j = index; j < size; j++) 
		{
			array[j] = array[j + 1];
		}
		size--;
	}
}
#endif // !SDDS_UTILS_H_

