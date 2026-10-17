#include "employee.h"

Employee::Employee(string last, string first, Date birth, Date hire) {
	this->firstname = first;
	this->lastname = last;
	this->birthdate = birth;
	this->hiredate = hire;
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