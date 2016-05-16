//
//  utilities.cpp
//  CPPUtilities
//
//  Created by Bill Komanetsky on 1/29/15.
//  Copyright (c) 2015 Bill Komanetsky. All rights reserved.
//

#include "utilities.hpp"
#include <string>

//
//This routine will take a string and convert it to upper case
//Since a string is basically an array of char values, the string
//passed in will be processed one character at a time making each
//character upper-case
//

bool utilities::allSpaces(string aString) {
	for (int i = 0; i < 2147483647; i++) {
		if (aString[i] == ' ') {
			return true;
		} else {
			break;
		}
	}
	return false;
}

string utilities::makeUpperCase(string theString) {

	locale settings;
	string newString;

	for (unsigned short i = 0; i < theString.size(); ++i)
		newString += (toupper(theString[i], settings));

	return newString;

} //makeUpperCase

//
//This routine will take a string and convert it to lower case
//Since a string is basically an array of char values, the string
//passed in will be processed one character at a time making each
//character lower-case
//
string utilities::makeLowerCase(string theString) {

	locale settings;
	string newString;

	for (unsigned short i = 0; i < theString.size(); ++i)
		newString += (tolower(theString[i], settings));

	return newString;

} //makeUpperCase

//
//Clear the CIN input buffer to avoid problems
//
void utilities::clearCIN(void) {
	cin.clear();
	cin.ignore(32768, '\n');
	return;
} //clearCIN

//
//Input a string to be returned to the calling function.
//
string utilities::inputString(string promptString, int minLength,
		int maxLength) {

	string userInput;
	SomeErrors myError;

	while (true) {
		try {
			cout << promptString << "\n";
			getline(cin, userInput);
			if (userInput.size() < minLength || userInput.size() > maxLength) {
				myError.errorMsg =
						"The string you entered is either too short or too long. Please try again\n ";
				myError.errorCode = 1;
				throw myError;
			} //if
			else if (utilities::allSpaces(userInput)) {
				myError.errorMsg = "All spaces. Try again\n";
				myError.errorCode = 2;
				throw myError;
			} else {
				break;
			}
		} catch (SomeErrors& myError) {
			if (myError.errorCode == 1) {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg << "////should be " << minLength
						<< " to " << maxLength << " in Length\n" << endl;
			} else {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg << endl;
			}
		}
	} //while
	return userInput;
} //inputString

//
//Input a integer value to be returned to the calling function.  Also, validate the
//the minimum and maximum value of the integer input.
//
int utilities::inputInt(string promptString, int minValue, int maxValue,
		int exitValue) {
	int userInput;
	SomeErrors myError;

	cout << promptString << " \n";
	while (true) {
		try {
			cin >> userInput;
			if (!cin.fail()) {
				char myChar = cin.peek();
				if (myChar == '\n')
					if ((userInput >= minValue && userInput <= maxValue)
							|| userInput == exitValue)
						break;
					else {
						clearCIN();
						myError.errorMsg =
								"The int you entered is either too short or too long. Please try again\n  ";
						myError.errorCode = 3;
						throw myError;
					} //else
				else {
					clearCIN();
					myError.errorMsg =
							"Invalid value entered.  Please try again\n  ";
					myError.errorCode = 4;
					throw myError;
				} //else
			} //if
			else {
				clearCIN();
				myError.errorMsg =
						"Invalid integer value entered. Please try again.\n";
				myError.errorCode = 5;
				throw myError;
			} //else
		} catch (SomeErrors& myError) {
			if (myError.errorCode == 3) {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg << "Should be between: " << minValue
						<< " and " << maxValue;
			} else if (myError.errorCode == 4) {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg << "Should be between: " << minValue
						<< " and " << maxValue;
			} else {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg;
			}

		}
	}
	clearCIN();
	return userInput;
} //inputInt

//
//Input a double value to be returned to the calling function.  Also, validate the
//the minimum and maximum value of the double input.
//
double utilities::inputDouble(string promptString, double minValue,
		double maxValue, double exitValue) {
	double userInput;
	SomeErrors myError;

	cout << promptString << " \n";
	while (true) {
		try {
			cin >> userInput;
			if (!cin.fail()) {
				char myChar = cin.peek();
				if (myChar == '\n')
					char myChar = cin.peek();
				if (myChar == '\n')
					if ((userInput >= minValue && userInput <= maxValue)
							|| userInput == exitValue)
						break;
					else {
						clearCIN();
						myError.errorMsg =
								"The int you entered is either too short or too long. Please try again\n  ";
						myError.errorCode = 3;
						throw myError;
					} //else
				else {
					clearCIN();
					myError.errorMsg =
							"Invalid value entered.  Please try again\n  ";
					myError.errorCode = 4;
					throw myError;
				} //else
			} //if
			else {
				cout << "Invalid double value entered. Please try again.\n";
				clearCIN();
			} //else
		} catch (SomeErrors& myError) {
			if (myError.errorCode == 3) {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg << "Should be between: " << minValue
						<< " and " << maxValue;
			} else if (myError.errorCode == 4) {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg << "Should be between: " << minValue
						<< " and " << maxValue;
			} else {
				cout << "errorCode " << myError.errorCode << " "
						<< myError.errorMsg;
			}

		}
	}
	clearCIN();
	return userInput;
} //inputdouble

//
//Send a string and center it in a returned string
//
string utilities::centerString(string stringToCenter, int toWidth) {
	string outputString;
	int l = 0;
	int pos = 0;

	l = static_cast<int>(stringToCenter.length());
	pos = (toWidth - l) / 2;
	for (int i = 0; i < pos; i++) {
		outputString = outputString + " ";
	} //for
	outputString = outputString + stringToCenter;
	return outputString;
} //centerString

//
// This function will return a random integer no larger than Max
//
int utilities::getRandomInt(int Min, int Max) {
	int tempInt = 0;

	while (true) {
		tempInt = rand() % Max;
		if (tempInt >= Min)
			break;
		else {
		}
	} //while

	return tempInt;
} //getRandomInt

//
//This function will return a random double with 2 decimal digits, and not greater than Max
//
double utilities::getRandomDouble(int Min, int Max, int decimalPlaces) {
	double returnNum;
	int tempInt;
	double tempDouble;

	while (true) {
		returnNum = ((double) rand() / RAND_MAX);
		tempInt = (returnNum * Max) * (pow(10, decimalPlaces));
		tempDouble = static_cast<double>(tempInt) / (pow(10, decimalPlaces));
		if (tempDouble >= Min)
			break;
		else {
		}
	} //while
	return tempDouble;
} //getRandomDouble

//
// This function will return a random integer no larger than Max
//
string utilities::getRandomString(int Min, int Max) {
	string tempString;

	int size = getRandomInt(Min, Max);
	for (int ctr = 0; ctr < size; ctr++) {
		char tempChar = getRandomInt(97, 122);
		tempString += tempChar;
	} //for

	return tempString;
} //getRandomInt

//
//Display a prompt asking the user if they want to
//sort the vector ascending or descening.
//
bool utilities::verifyAction(string userPrompt) {
	char userInput;
	bool returnValue = false;

	while (true) {
		cout << "\n";
		cout << userPrompt << "\n";
		cout << "<Y>es, <N>o ==> ";
		cin >> userInput;
		if (toupper(userInput) == 'Y') {
			returnValue = true;
			break;
		} //if
		else if (toupper(userInput) == 'N') {
			returnValue = false;
			break;
		} //else if
		else {
			cout << "Invalid selection, please try again\n";
		} //else
		clearCIN();
	} //while

	clearCIN();
	return returnValue;
} //verifyAction

//
//Ask the user if they want to append, overwrite or quit the read operation
//
char utilities::askOverWrite(void) {
	char userChoice;

	cout << "You already have data loaded into the system\n";
	cout << "Do you want to (O)verwrite, (A)ppend or (Q)uit? ";
	cin >> userChoice;
	switch (toupper(userChoice)) {
	case 'O': {
		break;
	} //case O
	case 'A':
		break;
	case 'Q':
	default: {
		cout << "Operation Aborted\n";
		return 'Q';
	} //default
	} //switch

	return toupper(userChoice);

} //askOverwrite

char utilities::getGender(void) {
	char userInput;

	while (true) {
		cout << "Please enter the gender M/F" << "\n";
		cin >> userInput;
		if (userInput != 'M' && userInput != 'F') {
			cout << "Please enter M/F" << "\n";
			cout << "Please try again\n";
		} //if
		else
			break;
	} //while
	return userInput;
}

