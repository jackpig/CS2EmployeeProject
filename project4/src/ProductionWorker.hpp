/*
 * ProductionWorker.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Zhijie
 */

#ifndef PRODUCTIONWORKER_HPP_
#define PRODUCTIONWORKER_HPP_

#include "Employee.hpp"
#include <iostream>

class ProductionWorker: public Employee {
private:
	int workHours;
	enum shift {
		DAY = 1, NIGHT = 2
	};
	shift aShift;
	double hourlyPayRate;
	double payAmount;
	string className;
public:
	ProductionWorker();
	virtual ~ProductionWorker();

	int getShift();
	int getWorkHours();
	bool setShift(string);
	bool setWorkHours(int);
	bool setHourlyPayRate(double);
	string getMyName();

	double getHourlyPayRate();

	virtual string printClassName();
	virtual double getPay();
};

#endif /* PRODUCTIONWORKER_HPP_ */
