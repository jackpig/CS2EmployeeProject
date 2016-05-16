/*
 * SomeErrors.hpp
 *
 *  Created on: May 1, 2016
 *      Author: Zhijie
 */

#ifndef SOMEERRORS_HPP_
#define SOMEERRORS_HPP_

#include <string>
using namespace std;

class SomeErrors {
public:
	SomeErrors();
	virtual ~SomeErrors();

	int errorCode;
	string errorMsg;
};

#endif /* SOMEERRORS_HPP_ */
