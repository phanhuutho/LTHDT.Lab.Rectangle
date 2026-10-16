#include "employee.h"

Employee::Employee(string lName, string fName, Date dBirth, Date dHire) {
	this->lastname = lName;
	this->firstname = fName;
	this->birthdate = dBirth;
	this->hiredate = dHire;
}

Employee::~Employee()
{

}

void Employee::print() const {
	cout << "Last Name: " << this->lastname << endl;
	cout << "First Name: " << this->firstname << endl;
	cout << "Birthday: ";
	this->birthdate.print();
	cout << endl;
	cout << "Hireday: ";
	this->hiredate.print();
	cout << endl;
}