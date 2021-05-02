//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream> 
#include <string>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include "Patient.h"
#include "utils.h"

using namespace std;
namespace sdds
{
	Patient::Patient(int ticketNumber, bool fileIO) :m_ticket(ticketNumber), m_fileIoFlag(fileIO)
	{
		m_patientName = nullptr;
	}

	Patient::~Patient()
	{
		delete[] m_patientName;
	}

	bool Patient::fileIO() const
	{
		return m_fileIoFlag;
	}

	void Patient::fileIO(bool bFileIO)
	{
		m_fileIoFlag = bFileIO;
	}

	char Patient::type() const
	{
		return 'P';
	}

	ostream& Patient::csvWrite(ostream& ostr) const
	{
		ostr << type() << "," << m_patientName << "," << m_ohipNumber << ",";
		m_ticket.csvWrite(ostr);

		return ostr;
	}

	void Patient::setName(char* name)
	{
		if (m_patientName)
			delete[] m_patientName;

		if (strlen(name) < 51)
		{
			m_patientName = new char[strlen(name) + 1];
			strcpy(m_patientName, name);
		}
		else
		{
			m_patientName = new char[50 + 1];
			strncpy(m_patientName, name, 50);
			m_patientName[50] = '\0';
		}
	}

	istream& Patient::csvRead(istream& istr)
	{

		char buf[51]{};
		istr.get(buf, 51, ',');
		if (buf[0] != '\0') {
			delete[] m_patientName;
			m_patientName = new char[strlen(buf) + 1];
			strcpy(m_patientName, buf);
			istr.ignore(100, ',');
			istr.get(buf, 51, ',');
			m_ohipNumber = atoi(buf);
			istr.ignore(100, ',');
			m_ticket.csvRead(istr);
		}

		return istr;
	}

	ostream& Patient::write(ostream& os) const
	{
		os << m_ticket << endl << m_patientName << ", OHIP: " << m_ohipNumber;
		return os;
	}

	istream& Patient::read(istream& is)
	{
		char name[1000];
		cout << "Name: ";
		is.getline(name, 1000);

		setName(name);
		cout << "OHIP: ";
		while (true)
		{
			m_ohipNumber = getInt();
			if (m_ohipNumber < 100000000 || m_ohipNumber>999999999)
				cout << "Invalid value enterd, retry[100000000 <= value <= 999999999]: ";
			else
				break;
		}
		return is;
	}

	void Patient::setArrivalTime()
	{
		return  m_ticket.resetTime();
	}

	int Patient::number()const
	{
		return m_ticket.number();
	}

	bool Patient::operator == (const Patient& n) const
	{
		return type() == n.type();
	}

	bool Patient::operator == (const char ch) const
	{
		return type() == ch;
	}

	Patient::operator Time() const
	{
		return Time(m_ticket);
	}

	ostream& operator<<(ostream& ostr, const Patient& n)
	{
		n.write(ostr);
		return ostr;
	}

	istream& operator>>(istream& istr, Patient& n)
	{
		n.read(istr);
		return istr;
	}
}

