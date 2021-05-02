//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#ifndef SDDS_IOABLE_H_
#define SDDS_IOABLE_H_
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

namespace sdds
{
	class IOAble
	{
	public:
		virtual ~IOAble();
		virtual ostream& csvWrite(ostream& os) const = 0;
		virtual istream& csvRead(istream& is) = 0;

		virtual ostream& write(ostream& os) const = 0;
		virtual istream& read(istream& is) = 0;

		friend ostream& operator<<(ostream& ostr, const IOAble& n);
		friend istream& operator>>(istream& istr, IOAble& n);
	};
}
#endif // !SDDS_IOABLE_H_
