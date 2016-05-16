/*
 * date.hpp
 *
 *  Created on: Feb 22, 2016
 *      Author: student
 */

#ifndef DATE_HPP_
#define DATE_HPP_

#include <iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date();
	virtual ~Date();

	int getYear(void);
	int getMonth(void);
	int getDay(void);
	bool setYear(int anInt);
	bool setMonth(int anInt);
	bool setDay(int anInt);
};

#endif /* DATE_HPP_ */
