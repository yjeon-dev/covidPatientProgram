//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================
#ifndef SDDS_TRIAGE_H
#define SDDS_TRIAGE_H
#include <iostream>
#include "Patient.h"
namespace sdds
{

	class TriagePatient :public Patient
	{
		char* m_symtoms = nullptr;	
	public:
		virtual char type() const;	

		TriagePatient();		
		~TriagePatient();	

		virtual ostream& csvWrite(ostream& ostr) const;	
		virtual istream& csvRead(istream& istr);	
		virtual ostream& write(ostream& os) const;	
		virtual istream& read(istream& is);	



	};

}
#endif // !SDDS_


