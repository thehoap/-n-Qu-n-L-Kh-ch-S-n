#pragma once
#include<iostream>
using namespace std;
class Date {
	private:
		int day, month, year;
	public:
		Date() {
			day = 21;
			month = 10;
			year = 2000;
		}
		Date(int nDay, int nMonth, int nYear) {
			this->day = nDay;
			this->month = nMonth;
			this->year = nYear;
		}
		Date(const Date& p) {
			this->day = p.day;
			this->month = p.month;
			this->year = p.year;
		}
		void setDate();
		void show();
};
