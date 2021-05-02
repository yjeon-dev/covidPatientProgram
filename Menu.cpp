//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "utils.h"
#include "Menu.h"

using namespace std;
namespace sdds
{
	Menu::Menu(const char* text, int NoOfSelections)
	{
		m_text = new char[strlen(text) + 1];
		strcpy(m_text, text);
		m_noOfSel = NoOfSelections;
	}

	Menu::~Menu()
	{
		delete[] m_text;
	}

	Menu::Menu(const Menu& menu)
	{
		m_text = new char[strlen(menu.m_text) + 1];
		strcpy(m_text, menu.m_text);
		m_noOfSel = menu.m_noOfSel;
	}

	Menu& Menu::operator=(const Menu& menu)
	{
		m_text = new char[strlen(menu.m_text) + 1];
		strcpy(m_text, menu.m_text);
		m_noOfSel = menu.m_noOfSel;
		return *this;
	}

	ostream& Menu::display(ostream& ostr)const
	{
		ostr << m_text << endl;
		ostr << "0- Exit" << endl;
		ostr << "> ";
		return ostr;
	}

	int& Menu::operator>>(int& Selection)
	{
		display();
		while (true)
		{
			cin >> Selection;
			if (cin.fail())
			{
				cout << "Bad integer value, try again: ";
				cin.clear();
				cin.ignore(100, '\n');
				continue;
			}
			if (Selection <0 || Selection >m_noOfSel)
			{
				cout << "Invalid value enterd, retry[0 <= value <= " << m_noOfSel << "]: ";
				continue;
			}
			break;
		}
		return Selection;
	}
}