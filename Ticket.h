//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================
#ifndef SDDS_TICKET_H_
#define SDDS_TICKET_H_
#include "IOAble.h"
#include "Time.h" 

using namespace std;
namespace sdds
{
	class Ticket :public IOAble
	{
		Time m_time;
		int m_number;

	public:
		Ticket(int number = 0);
		operator Time()const;
		int number()const;
		void resetTime();

		ostream& csvWrite(ostream& ostr)const;
		istream& csvRead(istream& istr);
		ostream& write(ostream& ostr)const;
		istream& read(istream& istr);
	};
}
#endif // !SDDS_TICKET_H_
