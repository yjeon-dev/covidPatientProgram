//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#include <iomanip>
#include "Time.h"
#include "utils.h"

using namespace std;
namespace sdds
{
	Time::Time()
	{
		m_min = 0;
	}


	Time& Time::reset()
	{
		m_min = sdds::getTime();
		return *this;
	}

	Time::Time(unsigned int min)
	{
		m_min = min;
	}

	ostream& Time::write(ostream& ostr) const
	{
		ostr << setw(2) << setfill('0') << m_min / 60 << ":" << setw(2) << setfill('0') << m_min % 60;
		return ostr;
	}

	istream& Time::read(istream& istr) {
		int hour = 0;
		int mins = 0;

		char ch = '\n';

		istr >> hour;
		istr >> ch;
		istr >> mins;
		if (ch != ':' || istr.fail())
		{
			istr.setstate(ios::failbit);
			return istr;
		}

		m_min = (hour * 60) + mins;

		return istr;
	}


	Time::operator int()const
	{
		return m_min;
	}

	Time& Time::operator *= (int val)
	{
		m_min *= val;
		return *this;
	}

	Time& Time::operator-=(const Time& D)
	{
		if (m_min >= D.m_min)
			m_min -= D.m_min;
		else
			m_min = (m_min + 24 * 60 - D.m_min);
		return *this;
	}

	ostream& operator<<(ostream& ostr, const Time& t)
	{
		t.write(ostr);
		return ostr;
	}

	istream& operator>>(istream& istr, Time& t)
	{
		t.read(istr);
		return istr;
	}

	Time Time::operator-(const Time& t)
	{
		Time tt = *this;
		tt -= t;
		return tt;
	}
}