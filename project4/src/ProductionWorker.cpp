/*
 * ProductionWorker.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Zhijie
 */

#include "ProductionWorker.hpp"
#include "utilities.hpp"

ProductionWorker::ProductionWorker() {
	workHours = 0;
	hourlyPayRate = 1;
	payAmount = 0;
	aShift = DAY;
	className = "ProductionWorker";
	// TODO Auto-generated constructor stub

}

ProductionWorker::~ProductionWorker() {
	// TODO Auto-generated destructor stub
}

/*void ProductionWorker::payFunction(int anInt){


 }*/

bool ProductionWorker::setShift(string aString) {
	bool returnValue = true;

	while (returnValue) {
		if (utilities::makeUpperCase(aString) == "Y") {
			aShift = NIGHT;
			returnValue = false;
		} else if (utilities::makeUpperCase(aString) == "N") {
			aShift = DAY;
			returnValue = false;
		} else {
		}
	}

	return returnValue;
}

bool ProductionWorker::setHourlyPayRate(double aDouble) {
	bool returnValue = true;

	if (aDouble < 0)
		returnValue = false;
	else
		hourlyPayRate = aDouble;

	return returnValue;
}

double ProductionWorker::getHourlyPayRate() {
	return hourlyPayRate;
}

bool ProductionWorker::setWorkHours(int anInt) {
	bool returnValue = true;

	if (anInt < 0)
		returnValue = false;
	else
		workHours = anInt;

	return returnValue;
}

int ProductionWorker::getWorkHours() {
	return workHours;
}

double ProductionWorker::getPay() {

	if (aShift == 1) {
		payAmount = hourlyPayRate * workHours;
	} else {
		payAmount = 1.5 * hourlyPayRate * workHours;
	}

	return payAmount;
}

int ProductionWorker::getShift() {
	return aShift;
}

string ProductionWorker::printClassName() {
	return "ProductionWorker";

}
