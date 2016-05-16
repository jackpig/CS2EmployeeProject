/*
 * date.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: student
 */

#include "utilities.hpp"
#include "date.hpp"
using namespace std;

Date::Date() {
	setYear(0);
	setMonth(0);
	setDay(0);

}
Date::~Date() {

}

int Date::getYear(void) {
	return year;
}
int Date::getMonth(void) {
	return month;
}
int Date::getDay(void) {
	return day;
}

bool Date::setYear(int anInt) {
	bool returnValue = true;

	if (anInt <= 1900 || anInt >= 2400)
		returnValue = false;
	else
		year = anInt;

	return returnValue;
}

bool Date::setMonth(int anInt) {
	bool returnValue = true;

	if (anInt < 1 || anInt > 12)
		returnValue = false;
	else
		month = anInt;

	return returnValue;
}

bool Date::setDay(int anInt) {
	bool returnValue = true;

	if (anInt < 1 || anInt > 31)
		returnValue = false;
	else
		day = anInt;

	return returnValue;
}

