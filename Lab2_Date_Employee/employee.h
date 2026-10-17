#pragma once
#include "date.h"
#include "string"
using namespace std;

class Employee
{
private:
	string lastname;
	string firstname;
	Date birthdate;
	Date hiredate;

public:
	Employee(string last, string first, Date birth, Date hire); //parameterized constructor

	~Employee(); //destructor object

	void print() const;  // print string info employee
};

