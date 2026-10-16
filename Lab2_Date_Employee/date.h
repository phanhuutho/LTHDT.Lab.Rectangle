#pragma once
#include <iostream>
#include "date.h"
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

	bool isLeapYear(int year) const; //check leap year
	int daysInMonthAndYear(int month, int year) const; //count day in month and year

public:
	Date(int month = 1, int day = 1, int year = 1900); //default constructor

	~Date(); //destructor object

	bool isValidDate(int month, int day, int year) const; // check valid date

	void print() const; // print string date format day/month/year
};

