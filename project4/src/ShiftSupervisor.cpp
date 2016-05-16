/*
 * ShiftSupervisor.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Zhijie
 */

#include "ShiftSupervisor.hpp"

ShiftSupervisor::ShiftSupervisor() {
	bonus = 0;
	goal = 0;
	monthlySalary = 0;
	payAmount = 0;
	// TODO Auto-generated constructor stub

}

ShiftSupervisor::~ShiftSupervisor() {
	// TODO Auto-generated destructor stub
}

double ShiftSupervisor::getPay() {

	payAmount = monthlySalary * 12 + bonus;

	return payAmount;
}

string ShiftSupervisor::printClassName() {
	return "ShiftSupervisor";

}

bool ShiftSupervisor::setBonus(double aDouble) {
	bool returnValue = true;
	if (aDouble < 0)
		returnValue = false;
	else
		bonus = aDouble;

	return returnValue;
}

double ShiftSupervisor::getBonus() {
	return bonus;
}

bool ShiftSupervisor::setMonthlySalary(double aDouble) {
	bool returnValue = true;
	if (aDouble < 0)
		returnValue = false;
	else
		monthlySalary = aDouble;

	return returnValue;

}

bool ShiftSupervisor::setGoal() {
	char aChar;
	bool returnValue = true;
	while (true) {
		cout << "Did this supervisor achieve the goal?Y(es) || N(o)\n";

		cin >> aChar;
		if (aChar == 'y' || aChar == 'Y') {
			goal = 1;
			break;
		} else if (aChar == 'n' || aChar == 'N') {
			goal = 0;
			break;
		} else {
			cout << "Wrong, you should input Y or N\n";
		}
	}
	utilities::clearCIN();

	return returnValue;
}

int ShiftSupervisor::getGoal() {
	return goal;
}
