/*
 * TeamLeader.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Zhijie
 */

#ifndef TEAMLEADER_HPP_
#define TEAMLEADER_HPP_

#include "ProductionWorker.hpp"
#include <iostream>

class TeamLeader: public ProductionWorker {
private:
	double payAmount;
	int workHours;
	double hourlyPayRate;
	int trainningHours;

public:
	TeamLeader();
	virtual ~TeamLeader();

	bool setTrainningHours(int);
	int getWorkHours();
	bool setWorkHours(int);
	double getHourlyPayRate();
	bool setHourlyPayRate(double);
	virtual double getPay();
	virtual string printClassName();

};

#endif /* TEAMLEADER_HPP_ */
