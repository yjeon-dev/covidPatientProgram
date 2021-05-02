//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include "PreTriage.h"
#include "CovidPatient.h"
#include "TriagePatient.h"
#include "Menu.h"
#include "utils.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
namespace sdds
{

	PreTriage::PreTriage(const char* dataFilename) :

		m_appMenu("General Hospital Pre-Triage Application\n1- Register\n2- Admit", 2),
		m_pMenu("Select Type of Admittance:\n1- Covid Test\n2- Triage", 2)
	{
		m_dataFilename = new char[256];
		strcpy(m_dataFilename, dataFilename);


		m_averCovidWait = 15;
		m_averTriageWait = 5;

		load();

	}


	PreTriage::~PreTriage()
	{
		save();

		for (int l = 0; l < m_lineupSize; l++)
		{
			delete m_lineup[l];
		}

		delete[] m_dataFilename;

		cout << "done!" << endl;
	}


	double PreTriage::save()
	{
		if (m_dataFilename)
		{
			ofstream f(m_dataFilename);
			if (f.is_open())
			{
				cout << "Saving Average Wait Times," << endl;
				cout << "   COVID Test: " << m_averCovidWait << endl;
				cout << "   Triage: " << m_averTriageWait << endl;

				f << m_averCovidWait;
				f << ",";
				f << m_averTriageWait;
				f << endl;

				cout << "Saving m_lineup..." << endl;

				for (int i = 0; i < m_lineupSize; i++)
				{
					cout << i + 1 << "- ";
					m_lineup[i]->csvWrite(cout) << endl;
					m_lineup[i]->csvWrite(f) << endl;
				}
				return true;
			}
		}
		return false;
	}


	void PreTriage::reg()
	{
		int selection = -1;


		if (m_lineupSize == 100)
		{
			cout << "Line up full!" << endl;
			return;
		}


		m_pMenu >> selection;

		if (selection == 1)
		{
			m_lineup[m_lineupSize] = new CovidPatient();
		}
		else if (selection == 2)
		{
			m_lineup[m_lineupSize] = new TriagePatient();
		}
		else if (selection == 0)
		{
			return;
		}


		m_lineup[m_lineupSize]->setArrivalTime();

		cout << "Please enter patient information: " << endl;

		cin >> *m_lineup[m_lineupSize];
		cout << endl;
		cout << "******************************************";
		cout << endl;


		cout << *m_lineup[m_lineupSize];

		cout << "Estimated Wait Time: ";

		cout << getWaitTime(*m_lineup[m_lineupSize]);

		cout << endl;
		cout << "******************************************";
		cout << endl << endl;
		m_lineupSize++;
	}



	void PreTriage::admit()
	{
		int selection = -1;
		char type = 0;


		m_pMenu >> selection;

		if (selection == 1)
		{
			type = 'C';
		}

		else if (selection == 2)
		{
			type = 'T';
		}

		else if (selection == 0)
		{
			return;
		}


		int index = indexOfFirstInLine(type);


		if (index == -1)
		{
			cout << "no patient is found" << endl;
			return;
		};

		cout << endl;
		cout << "******************************************";
		cout << endl;

		cout << "Calling for ";

		cout << *m_lineup[index];
		cout << "******************************************";
		cout << endl << endl;


		setAverageWaitTime(*m_lineup[index]);


		removePatientFromLineup(index);
	}


	const Time PreTriage::getWaitTime(const Patient& p)const
	{
		int count = 0;

		for (int l = 0; l < m_lineupSize; l++)
		{
			if (m_lineup[l]->type() == p.type())
				count++;
		}

		if (p.type() == 'C')
			return count * m_averCovidWait;
		else if (p.type() == 'T')
			return count * m_averTriageWait;
		return 0;
	}



	void PreTriage::setAverageWaitTime(const Patient& p)
	{
		int CT = getTime();
		int PTT = Time(p);
		int PTN = p.number();
		int AWT = 0;

		if (p.type() == 'C')
		{
			AWT = m_averCovidWait;
		}
		else if (p.type() == 'T')
		{
			AWT = m_averTriageWait;
		}

		AWT = (int)(((float)((CT - PTT) + (AWT * (PTN - 1)))) / PTN);



		if (p.type() == 'C')
		{
			m_averCovidWait = AWT;

		}
		else if (p.type() == 'T')
		{
			m_averTriageWait = AWT;
		}
		else
		{
			AWT = 0;
		}
	}

	void PreTriage::removePatientFromLineup(int index)
	{

		removeDynamicElement(m_lineup, index, m_lineupSize);
	}



	int PreTriage::indexOfFirstInLine(char type) const
	{

		for (int i = 0; i < m_lineupSize; i++)
			if (m_lineup[i]->type() == type)
			{
				return i;
			}
		return -1;
	}



	void PreTriage::load()
	{
		cout << "Loading data..." << endl;

		ifstream ifs(m_dataFilename);

		ifs >> m_averCovidWait;

		ifs.ignore(256, ',');
		ifs >> m_averTriageWait;
		ifs.ignore(256, '\n');

		while (ifs.good())
		{
			char line[256];
			ifs.getline(line, 256, ',');
			if (line[0] == 'C')
				m_lineup[m_lineupSize] = new CovidPatient();
			else if (line[0] == 'T')
				m_lineup[m_lineupSize] = new TriagePatient();
			else
				break;
			m_lineup[m_lineupSize]->csvRead(ifs).ignore(1000, '\n');

			m_lineupSize++;

			if (m_lineupSize >= maxNoOfPatients)
			{
				cout << "Warning: number of records exceeded 100" << endl;
				break;
			}
		}
		if (m_lineupSize == 0)
			cout << "No data or bad data file!" << endl << endl;
		else
			cout << m_lineupSize << " Records imported..." << endl << endl;

		ifs.close();
	}


	void PreTriage::run(void)
	{
		int selection = -1;


		while (true)
		{
			m_appMenu >> selection;

			if (selection == 0)
			{
				return;
			}

			else if (selection == 1)
			{
				reg();

			}

			else if (selection == 2)
			{
				admit();
			}
		}
	}
}