//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================


#include "CovidPatient.h"

using namespace std;


int nextCovidTicket = 1;

namespace sdds
{

	char CovidPatient::type() const
	{
		return 'C';
	}

	CovidPatient::CovidPatient() :Patient(nextCovidTicket)
	{
		nextCovidTicket++;
	}

	ostream& CovidPatient::csvWrite(ostream& ostr) const
	{

		Patient::csvWrite(ostr);

		return ostr;
	}

	istream& CovidPatient::csvRead(istream& istr)
	{
		Patient::csvRead(istr);

		nextCovidTicket = Patient::number() + 1;

		return istr;
	}

	ostream& CovidPatient::write(ostream& os) const
	{
		if (Patient::fileIO() == true)
		{
			CovidPatient::csvWrite(os);
		}

		else
		{
			os << "COVID TEST" << endl;


			Patient::write(os);

			os << endl;
		}

		return os;
	}

	istream& CovidPatient::read(istream& is)
	{

		if (Patient::fileIO() == true)
		{
			CovidPatient::csvRead(is);
		}

		else
		{
			Patient::read(is);
		}
		return is;
	}
}