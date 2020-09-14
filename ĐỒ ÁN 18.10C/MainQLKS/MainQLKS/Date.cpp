#include"Date.h"
bool leapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return true;
	}
	return false;
}
int maxdayintmonth(int day, int month, int year) {
	int maxday;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		maxday = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		maxday = 30;
		break;

	case 2:
		if (namnhuan(year) == true) maxday = 28;
		else maxday = 29;
		break;
	default:
		break;
	}
	return maxday;
}
void Date::setDate() {
	int nDay, nMonth, nYear;
	do
	{
		cout << "Ngay: ";
		cin >> nDay;
	} while (nDay > 31 || nDay < 1);
	do
	{
		cout << "Thang: ";
		cin >> nMonth;
	} while (nMonth > 12 || nMonth < 1);
	do
	{
		cout << "Nam: ";
		cin >> nYear;
	} while (nYear < 1);
	do
	{
		if (nDay > maxdayintmonth(nDay, nMonth, nYear)) {
			cout << "Ngay da nhap khong hop le!!!" << endl;
			cout << "Nhap lai ngay:";
			cin >> nDay;
		}
	} while (nDay > maxdayintmonth(nDay, nMonth, nYear));
	this->day = nDay;
	this->month = nMonth;
	this->year = nYear;
}
void Date::show() {
	cout << "Date:" << day << "/" << month << "/" << year << endl;
}
