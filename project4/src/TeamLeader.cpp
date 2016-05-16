/*
 * TeamLeader.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Zhijie
 */

#include "TeamLeader.hpp"
#include <iostream>

using namespace std;

TeamLeader::TeamLeader() {
	workHours = 0;
	hourlyPayRate = 1;
	payAmount = 0;
	trainningHours = 0;
	// TODO Auto-generated constructor stub

}

TeamLeader::~TeamLeader() {
	// TODO Auto-generated destructor stub
}

double TeamLeader::getPay() {

	payAmount = hourlyPayRate * workHours + trainningHours * 15;

	return payAmount;
}

bool TeamLeader::setTrainningHours(int anInt) {
	bool returnValue = true;

	if (anInt < 0)
		returnValue = false;
	else
		trainningHours = anInt;

	return returnValue;
}

bool TeamLeader::setHourlyPayRate(double aDouble) {
	bool returnValue = true;

	if (aDouble < 0)
		returnValue = false;
	else
		hourlyPayRate = aDouble;

	return returnValue;
}

double TeamLeader::getHourlyPayRate() {
	return hourlyPayRate;
}

bool TeamLeader::setWorkHours(int anInt) {
	bool returnValue = true;

	if (anInt < 0)
		returnValue = false;
	else
		workHours = anInt;

	return returnValue;
}

int TeamLeader::getWorkHours() {
	return workHours;
}

string TeamLeader::printClassName() {
	return "TeamLeader";
}
