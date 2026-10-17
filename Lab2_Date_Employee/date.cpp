#include "date.h"

Date::Date(int month, int day, int year)
{
	if (isValidDate(month, day, year))
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	else
	{
		cout << "Invalid date '" << day << "/" << month << "/" << year << "', and set to default 1/1/1900." << endl;
		this->day = 1;
		this->month = 1;
		this->year = 1900;
	}
}

Date::~Date()
{

}

bool Date::isValidDate(int month, int day, int year) const
{
	if (month < 1 || month > 12) 
		return false;
	if (day < 1 || day > daysInMonthAndYear(month, year)) 
		return false;
	if (year < 1) 
		return false;
	return true;
}

bool Date::isLeapYear(int year) const
{
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int Date::daysInMonthAndYear(int month, int year) const
{
	if (month > 0 && month <= 12 && year > 0)
	{
		if (month == 2) {
			if (isLeapYear(year))
				return 29;
			else
				return 28;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			return 30;
		}
		else
		{
			return 31;
		}
	}
	else
	{
		return 0;
	}
}

void Date::print() const
{
	cout << this->day << "/" << this->month << "/" << this->year;
}