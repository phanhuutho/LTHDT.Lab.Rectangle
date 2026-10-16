#pragma once
#include "date.h"
#include "string"
class Employee
{
private:
	string lastname;
	string firstname;
	Date birthdate;
	Date hiredate;

public:
	Employee(string lName, string fName, Date dBirth, Date dHire); //parameterized constructor

	~Employee(); //destructor object

	void print() const;  // print string info employee
};

