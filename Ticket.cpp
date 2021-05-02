//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#include <stdlib.h>
#include "Ticket.h"

using namespace std;
namespace sdds
{
	Ticket::Ticket(int number)
	{
		m_number = number;
	}

	Ticket::operator Time() const
	{
		return m_time;
	}

	int Ticket::number() const
	{
		return m_number;
	}

	void Ticket::resetTime()
	{
		m_time.reset();
	}

	ostream& Ticket::csvWrite(ostream& ostr) const
	{
		return ostr << m_number << "," << m_time;
	}

	istream& Ticket::csvRead(istream& istr)
	{
		char buf[100];
		istr.get(buf, 100, ',');
		m_number = atoi(buf);
		istr.ignore(100, ',');

		istr >> m_time;

		return istr;
	}

	ostream& Ticket::write(ostream& ostr) const
	{
		return ostr << "Ticket No: " << m_number << ", Issued at: " << m_time;
	}

	istream& Ticket::read(istream& istr)
	{
		return csvRead(istr);
	}
}
