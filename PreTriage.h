//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#ifndef SDDS_PRETRIAGE_H_
#define SDDS_PRETRIAGE_H_
#include "Patient.h"
#include "Menu.h"
namespace sdds
{
	const int maxNoOfPatients = 100;

	class PreTriage
	{

		Time m_averCovidWait;
		Time m_averTriageWait;

		Patient* m_lineup[maxNoOfPatients];

		char* m_dataFilename = nullptr;

		int m_lineupSize = 0;

		Menu m_appMenu;
		Menu m_pMenu;

		void reg();
		void admit();
		const Time getWaitTime(const Patient& p)const;
		void setAverageWaitTime(const Patient& p);
		void removePatientFromLineup(int index);
		void load();
		int indexOfFirstInLine(char type) const;




	public:
		PreTriage(const char* dataFilename);
		~PreTriage();
		void run(void);
		double save();



	};
}
#endif // !SDDS__H_
