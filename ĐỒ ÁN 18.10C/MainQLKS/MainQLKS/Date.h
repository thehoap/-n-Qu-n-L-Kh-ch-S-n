#pragma once
#include<iostream>
#include<string>
#include<cstdlib> 
#include<iomanip>
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
		void setDay(int day) {
			this->day = day;
		}
		void setMonth(int month) {
			this->month = month;
		}
		void setYear(int year) {
			this->year = year;
		}
		int getDay() {
			return day;
		}
		int getMonth() {
			return month;
		}
		int getYear() {
			return year;
		}
};
