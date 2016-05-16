/*
 * ShiftSupervisor.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Zhijie
 */

#ifndef SHIFTSUPERVISOR_HPP_
#define SHIFTSUPERVISOR_HPP_

#include "Employee.hpp"
#include "utilities.hpp"
#include <iostream>

class ShiftSupervisor: public Employee {
private:
	double payAmount;
	double monthlySalary;
	int goal;
	double bonus;
public:
	ShiftSupervisor();
	virtual ~ShiftSupervisor();

	virtual double getPay();
	virtual string printClassName();

	bool setMonthlySalary(double);
	bool setGoal();
	double getBonus();
	bool setBonus(double);
	int getGoal();
	string getMyName();

};

#endif /* SHIFTSUPERVISOR_HPP_ */
