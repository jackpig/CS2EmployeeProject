/*
 * Employee.hpp
 *
 *  Created on: Apr 6, 2016
 *      Author: student
 */

#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include <string>
#include <iostream>
#include "date.hpp"
using namespace std;

class Employee {
protected:
	string employeeID;
	string name;
	Date hDate;

public:
	Employee();
	virtual ~Employee();

	virtual double getPay() = 0;
	virtual string printClassName() = 0;

	string printHDate();

	string getName();
	string getEmployeeID();
	Date getHDate();
	bool setName(string);
	bool setEmployeeID(string);
	bool setHDate(int, int, int);

};

#endif /* EMPLOYEE_HPP_ */
