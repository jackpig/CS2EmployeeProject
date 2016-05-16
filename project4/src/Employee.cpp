/*
 * Employee.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: student
 */

#include "Employee.hpp"
#include "date.hpp"
#include <iostream>
#include <sstream>

Employee::Employee() {
	//cout << "You are creating me~ Employee Base\n";
	// TODO Auto-generated constructor stub

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

string Employee::getName() {
	return name;
}

string Employee::getEmployeeID() {
	return employeeID;
}

Date Employee::getHDate() {
	return hDate;
}
/*std::stringstream sstm;
 sstm << name << age;
 result = sstm.str();*/
string Employee::printHDate() {
	stringstream sstm;
	string aString;
	sstm << hDate.getDay() << "/" << hDate.getMonth() << "/" << hDate.getYear();
	aString = sstm.str();
	return aString;
}

bool Employee::setName(string aString) {
	bool returnValue = true;

	if (aString.size() < 0)
		returnValue = false;
	else
		name = aString;

	return returnValue;
}

bool Employee::setEmployeeID(string aString) {
	bool returnValue = true;

	if (aString.length() < 0)
		returnValue = false;
	else
		employeeID = aString;

	return returnValue;
}

bool Employee::setHDate(int aday, int amonth, int ayear) {
	bool returnValue = true;

	if (aday < 1 || aday > 31 || ayear < 1900 || ayear > 2016 || amonth < 1
			|| amonth > 12)
		returnValue = false;
	else
		hDate.setDay(aday);
	hDate.setMonth(amonth);
	hDate.setYear(ayear);

	return returnValue;
}

