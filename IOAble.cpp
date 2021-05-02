//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#include "IOAble.h"

namespace sdds
{
	IOAble::~IOAble()
	{

	}

	ostream& operator<<(ostream& ostr, const IOAble& n)
	{
		n.write(ostr);
		return ostr;
	}

	istream& operator>>(istream& istr, IOAble& n)
	{
		n.read(istr);
		return istr;
	}

}