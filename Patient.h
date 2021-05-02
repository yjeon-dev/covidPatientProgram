//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================
#include <iostream>
#include "IOAble.h"
#include "Ticket.h"
#ifndef SDDS_PATIENT_H_
#define SDDS_PATIENT_H_

namespace sdds
{
	class Patient :public IOAble
	{
		char* m_patientName;
		int m_ohipNumber = 0;
		Ticket m_ticket;

		bool m_fileIoFlag;

	public:
		Patient();
		Patient(int ticketNumber, bool bfileIO = false);
		~Patient();
		bool fileIO() const;
		void fileIO(bool bfileIO);

		virtual ostream& csvWrite(ostream& ostr) const;
		virtual istream& csvRead(istream& istr);
		virtual ostream& write(ostream& os) const;
		virtual istream& read(istream& is);
		virtual char type()const;

		int number()const;
		void setArrivalTime();
		operator Time() const;

		bool operator == (const Patient& n) const;
		bool operator == (const char ch) const;

		friend ostream& operator<<(ostream& ostr, const Patient& n);
		friend istream& operator>>(istream& istr, Patient& n);

		void setName(char* name);
	};
}
#endif // !SDDS_PATIENT_H_


