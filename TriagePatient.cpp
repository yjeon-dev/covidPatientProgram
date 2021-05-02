//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include "TriagePatient.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
namespace sdds
{
	int nextTriageTicket = 1;


	char TriagePatient::type() const
	{
		return 'T';
	}

	TriagePatient::TriagePatient() :Patient(nextTriageTicket), m_symtoms(NULL)
	{
		nextTriageTicket++;
	}

	ostream& TriagePatient::csvWrite(ostream& ostr) const
	{
		Patient::csvWrite(ostr);

		ostr << "," << m_symtoms;

		return ostr;
	}


	istream& TriagePatient::csvRead(istream& istr)
	{
		delete[] m_symtoms;

		Patient::csvRead(istr);

		char symtoms[511];
		istr.getline(symtoms, 511);
		istr.putback('\n');

		if (symtoms[0] == ',') {
			m_symtoms = new char[strlen(symtoms)];
			strcpy(m_symtoms, &symtoms[1]);
		}
		else {
			m_symtoms = new char[strlen(symtoms) + 1];
			strcpy(m_symtoms, symtoms);
		}
		nextTriageTicket = Patient::number() + 1;

		return istr;
	}

	ostream& TriagePatient::write(ostream& os) const
	{
		if (Patient::fileIO() == true)
		{
			TriagePatient::csvWrite(os);
		}

		else
		{
			os << "TRIAGE" << endl;

			Patient::write(os);
			cout << endl;

			os << "Symptoms: ";

			os << m_symtoms;

			cout << endl;

		}
		return os;
	}

	istream& TriagePatient::read(istream& is)
	{

		if (Patient::fileIO() == true)
		{
			TriagePatient::csvRead(is);
		}
		else
		{
			delete[] m_symtoms;

			Patient::read(is);

			cout << "Symptoms: ";

			char symtoms[511];
			is.getline(symtoms, 511);

			if (symtoms[0] == ',') {
				m_symtoms = new char[strlen(symtoms)];
				strcpy(m_symtoms, &symtoms[1]);
			}
			else {
				m_symtoms = new char[strlen(symtoms) + 1];
				strcpy(m_symtoms, symtoms);
			}
		}

		return is;
	}


	TriagePatient::~TriagePatient()
	{
		delete[] m_symtoms;
	}
}