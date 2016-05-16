//
//  utilities.hpp
//  CPPUtilities
//
//  Created by Bill Komanetsky on 1/29/15.
//  Copyright (c) 2015 Bill Komanetsky. All rights reserved.
//

#ifndef utilities_hpp
#define utilities_hpp

#include <cmath>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "SomeErrors.hpp"
using namespace std;

class utilities {
//
//Prototypes for utilities.cpp
//
public:
	static bool allSpaces(string);
	static int inputInt(string, int, int, int);
	static int getRandomInt(int, int);
	static void clearCIN(void);
	static bool verifyAction(string);
	static char askOverWrite(void);
	static double inputDouble(string, double, double, double);
	static double getRandomDouble(int, int, int);
	static string makeUpperCase(string);
	static string makeLowerCase(string);
	static string getRandomString(int, int);
	static string inputString(string, int, int);
	static string centerString(string, int);
	static char getGender(void);
};

#endif /* defined(__CPPUtilities__utilities__) */
