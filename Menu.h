//==============================================
// Name:           YESEUL JEON
// Student Number: 148011190
// Email:          yjeon12@myseneca.ca
// Date:           2020 / December / 04
// Section:        OOP244(NCC)
// OOP-Project:    FP
//==============================================

#ifndef SDDS_MENU_H_
#define SDDS_MENU_H_
#include <iostream>
using namespace std;
namespace sdds
{
	class Menu
	{
		char* m_text;
		int m_noOfSel;
	public:
		Menu(const char* text, int NoOfSelections);
		virtual ~Menu();
		Menu(const Menu& menu);
		Menu& operator=(const Menu& menu);
		ostream& display(ostream& ostr = cout)const;
		int& operator>>(int& Selection);
	};
}
#endif // !SDDS_MENU_H_
