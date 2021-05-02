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
#include <cstdlib>
#include <ctime>
#include "utils.h"
#include "Time.h"

using namespace std;
namespace sdds
{
	bool debug = false;

	int getTime() {
		int mins = -1;

		if (debug) {
			Time t(0);
			cout << "Enter current time: ";
			do {
				cin.clear();
				cin >> t;
				if (!cin) {
					cout << "Invlid time, try agian (HH:MM): ";
					cin.clear();
				}
				else {
					mins = int(t);
				}
				cin.ignore(1000, '\n');
			} while (mins < 0);
		}
		else {
			time_t t = time(NULL);
			tm lt = *localtime(&t);
			mins = lt.tm_hour * 60 + lt.tm_min;
		}
		return mins;
	}

	int getInt() {
		int value;
		bool badEntry;
		char nextChar;
		do {
			badEntry = false;
			cin >> value;
			if (cin.fail()) {
				cout << "Bad integer value, try again: ";
				cin.clear();
				cin.ignore(3000, '\n');
				badEntry = true;
			}
			else {
				nextChar = cin.get();
				if (nextChar != '\n') {
					cout << "Only enter an integer, try again: ";
					cin.ignore(3000, '\n');
					badEntry = true;
				}
			}
		} while (badEntry);
		return value;
	}

	bool is_number(const string& s)
	{
		for (int i = 0; (unsigned int)i < s.length(); i++)
		{
			if (!isdigit(s[i]))
				return false;
		}
		return true;
	}
}