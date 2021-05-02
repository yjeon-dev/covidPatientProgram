//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================
#ifndef SDDS_TIME_H
#define SDDS_TIME_H
#include <iostream>
#include <string>
#include "IOAble.h"
using namespace std;
namespace sdds
{

	class Time
	{
		unsigned int m_min;

	public:
		Time();

		Time& reset();
		Time(unsigned int min);

		ostream& write(ostream& os) const;
		istream& read(istream& is);

		operator int()const;
		Time& operator *= (int val);
		Time& operator-=(const Time& t);

		friend ostream& operator<<(ostream& ostr, const Time& t);
		friend istream& operator>>(istream& istr, Time& t);

		Time operator-(const Time& t);
	};
}
#endif // !SDDS_TIME_H

