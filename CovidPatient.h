//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#ifndef SDDS_COVIDPATIENT_H_
#define SDDS_COVIDPATIENT_H_
#include "Patient.h"

namespace sdds
{

	class CovidPatient :public Patient
	{
	public:
		virtual char type() const;

		CovidPatient();

		virtual ostream& csvWrite(ostream& ostr) const;
		virtual istream& csvRead(istream& istr);
		virtual ostream& write(ostream& os) const;
		virtual istream& read(istream& is);
	};
}
#endif // !SDDS_COVIDPATIENT_H_



