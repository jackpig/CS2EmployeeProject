//============================================================================
// Name        : project4.cpp
// Author      : Zhijie Zhu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <map>
#include <typeinfo>
#include "utilities.hpp"
#include "Employee.hpp"
#include "ProductionWorker.hpp"
#include "ShiftSupervisor.hpp"
#include "TeamLeader.hpp"
#include "ListNodeC.hpp"
using namespace std;

int main() {
	char userChoice;
	int PWNum = 0;
	int SSNum = 0;
	int TLNum = 0;
	ListNodeC<ProductionWorker> pwList;
	ListNodeC<ShiftSupervisor> ssList;
	ListNodeC<TeamLeader> tlList;

	/*  	Weapon *myWeapons[totalWeapons];
	 myWeapons[0] = new Tank();
	 myWeapons[1] = new MachineGun();   */
	//new template
	/*map <string, Employee*> myEmployees;
	 map <string, Employee*>::iterator iter;
	 pair<map<string, Employee*>::iterator, bool> insertOK;*/
	//typedef map<string, list<string>>::const_iterator MapIterator;
	ProductionWorker * tempProductionWorker;
	ShiftSupervisor * tempShiftSupervisor;
	TeamLeader * tempTeamLeader;

	/*ProductionWorker *myProductionWorkers[100];
	 ShiftSupervisor *myShiftSupervisors[100];
	 TeamLeader *myTeamLeaders[100];*/

	do {
		cout << "It is a change\n";
		cout << "=========================================\n";
		cout << "Welcome to the Employee Pay System\n";
		cout << "=========================================\n";
		cout << "1. Create a Production Worker\n";
		cout << "2. Create a Shift Supervisor\n";
		cout << "3. Crate a Team Leader\n";
		cout << "4. Pay Everyone\n";
		cout << "5. Print little list\n";
		cout << "9. Exit the Program\n";
		cout << "Please enter a menu option: \n";
		cin >> userChoice;
		utilities::clearCIN();

		switch (userChoice) {

		case ('1'): {
			PWNum = utilities::inputInt(
					"How many production worker would you like to enter?", 1,
					100, -999);
			cout << "------------------------------------\n";

			for (int i = 0; i < PWNum; i++) {
				tempProductionWorker = new ProductionWorker();
				cout << "Entering employee # " << i << endl;
				tempProductionWorker->setName(
						utilities::inputString("Please enter the name", 1, 20));
				tempProductionWorker->setEmployeeID(
						utilities::inputString("Please enter the employee ID",
								5, 20));
				tempProductionWorker->setHDate(
						utilities::inputInt("Please enter the enrollment day",
								1, 31, -999),
						utilities::inputInt("Please enter the enrollment month",
								1, 12, -999),
						utilities::inputInt("Please enter the enrollment year",
								1900, 2100, -999));
				tempProductionWorker->setShift(
						utilities::inputString(
								"Does the worker work at night?\n (Y)es / (N)o",
								1, 1));
				tempProductionWorker->setHourlyPayRate(
						utilities::inputDouble(
								"What is this woker's hourly pay rate?", 0, 40,
								-999));
				tempProductionWorker->setWorkHours(
						utilities::inputInt(
								"How many hours did the worker work?", 1, 40,
								-999));
				pwList.appendNode(tempProductionWorker);

				/*insertOK = myEmployees.insert(pair<string, ProductionWorker*>(tempProductionWorker->getEmployeeID(), tempProductionWorker));
				 if(insertOK.second)
				 continue;
				 else
				 cout << "Insert failed\n";*/
				//Map ones
				delete tempProductionWorker;
				/*pair<map<int, Boat>::iterator, bool> insertOK;
				 insertOK = myBoats.insert(pair<int, Boat>(boatKey, tempBoat));*/

				//myBoats[boatKey] = tempBoat;
			} //for loop

			break;
		} //case '1'

		case ('2'): {
			cout << "How many shift supervisor would you like to enter?\n";
			cout << "------------------------------------\n";
			SSNum = utilities::inputInt("", 1, 100, -999);

			for (int i = 0; i < SSNum; i++) {
				tempShiftSupervisor = new ShiftSupervisor();
				cout << "Entering employee # " << i << endl;
				tempShiftSupervisor->setName(
						utilities::inputString("Please enter the name", 0, 20));
				tempShiftSupervisor->setEmployeeID(
						utilities::inputString("Please enter the employee ID",
								5, 20));
				tempShiftSupervisor->setHDate(
						utilities::inputInt("Please enter the day", 1, 31,
								-999),
						utilities::inputInt("Please enter the month", 1, 12,
								-999),
						utilities::inputInt("Please enter the year", 1900, 2100,
								-999));
				tempShiftSupervisor->setMonthlySalary(
						utilities::inputDouble(
								"What is this guy's monthly salary?", 100, 500,
								-999));
				tempShiftSupervisor->setGoal();
				if (tempShiftSupervisor->getGoal() == 1) {
					tempShiftSupervisor->setBonus(
							utilities::inputDouble("What is the bonus?", 1, 500,
									-999));
				} else {

				}
				ssList.appendNode(tempShiftSupervisor);
				/*insertOK = myEmployees.insert(pair<string, ShiftSupervisor*>(tempShiftSupervisor->getEmployeeID(), tempShiftSupervisor));
				 if(insertOK.second)
				 continue;
				 else
				 cout << "Insert failed\n";*/
				delete tempShiftSupervisor;

				//myBoats[boatKey] = tempBoat;
			} //for loop

			break;
		} //case '2'

		case ('3'): {
			cout << "How many team leader would you like to enter?\n";
			cout << "------------------------------------\n";
			TLNum = utilities::inputInt("", 1, 100, -999);

			for (int i = 0; i < TLNum; i++) {
				tempTeamLeader = new TeamLeader();
				cout << "Entering employee # " << i << endl;
				tempTeamLeader->setName(
						utilities::inputString("Please enter the name", 0, 20));
				tempTeamLeader->setEmployeeID(
						utilities::inputString("Please enter the employee ID",
								5, 20));
				tempTeamLeader->setHDate(
						utilities::inputInt("Please enter the day", 1, 31,
								-999),
						utilities::inputInt("Please enter the month", 1, 12,
								-999),
						utilities::inputInt("Please enter the year", 1900, 2100,
								-999));
				tempTeamLeader->setHourlyPayRate(
						utilities::inputDouble(
								"What is this woker's hourly pay rate?", 0, 100,
								-999));
				tempTeamLeader->setWorkHours(
						utilities::inputInt(
								"How many hours did the worker work?", 1, 200,
								-999));
				tempTeamLeader->setTrainningHours(
						utilities::inputInt(
								"How many hours have been trained??", 1, 200,
								-999));
				tlList.appendNode(tempTeamLeader);
				/*insertOK = myEmployees.insert(pair<string, TeamLeader*>(tempTeamLeader->getEmployeeID(), tempTeamLeader));
				 if(insertOK.second)
				 continue;
				 else
				 cout << "Insert failed\n";*/
				delete tempTeamLeader;

				//myBoats[boatKey] = tempBoat;
			} //for loop

			break;
		} //case '3'
		case ('4'): {


			cout << left << setw(15) << "Employee ID" << left << setw(25)
					<< "Name" << setw(20) << "Type" << setw(20) << "Bouns Amt"
					<< setw(10) << "Pay Amt" << setw(10) << "Comment" << endl;

			cout << left << setw(15) << "----------" << left << setw(25)
					<< "-------------" << setw(20) << "-------" << setw(20)
					<< "-------" << setw(10) << "-------" << setw(10)
					<< "-------" << endl;

			pwList.gotoFirst();
			for(int i =0; i < pwList.size(); i++) {
				cout << left << setw(15) << pwList.getCurrent().getEmployeeID()<< left
						<< setw(25) << pwList.getCurrent().getName() << setw(20)
						<< pwList.getCurrent().printClassName() << setw(20) << "" << setw(10)
						<< pwList.getCurrent().getPay() << setw(10) << "" <<  endl;
				pwList.gotoNext();
			}

			ssList.gotoFirst();
			for(int i =0; i < ssList.size(); i++) {
				cout << left << setw(15) << ssList.getCurrent().getEmployeeID() << left
						<< setw(25) << ssList.getCurrent().getName() << setw(20)
						<< ssList.getCurrent().printClassName() << setw(20) << "" << setw(10)
						<< ssList.getCurrent().getPay() << setw(10) << "" <<  endl;
				ssList.gotoNext();
			}

			tlList.gotoFirst();
			for(int i =0; i < tlList.size(); i++) {
				cout << left << setw(15) << tlList.getCurrent().getEmployeeID() << left
						<< setw(25) << tlList.getCurrent().getName() << setw(20)
						<< tlList.getCurrent().printClassName() << setw(20) << "" << setw(10)
						<< tlList.getCurrent().getPay() << setw(10) << "" <<  endl;
				tlList.gotoNext();
			}

			/*for (int i = 0; i < PWNum; i ++){
			 cout << left << setw(15) << myProductionWorkers[i]->getEmployeeID() << left << setw(25) << myProductionWorkers[i]->getName() << setw(20)
			 << "Production Worker" << setw(20) << "" << setw(10) << myProductionWorkers[i]->getPay() << setw(10) << "" << endl;

			 }

			 for (int i = 0; i < SSNum; i ++){
			 cout << left << setw(15) << myShiftSupervisors[i]->getEmployeeID() << left << setw(25) << myShiftSupervisors[i]->getName() << setw(20)
			 << "ShiftSupervisor" << setw(20) << myShiftSupervisors[i]->getBonus() << setw(10) << myShiftSupervisors[i]->getPay() << setw(10) << "" << endl;

			 }

			 for (int i = 0; i < TLNum; i ++){
			 cout << left << setw(15) << myTeamLeaders[i]->getEmployeeID() << left << setw(25) << myTeamLeaders[i]->getName() << setw(20)
			 << "Team Leader" << setw(20) << "" << setw(10) << myTeamLeaders[i]->getPay() << setw(10) << "" << endl;

			 }*/
			//last version (project 2)
			/*typedef map<string, list<string>>::const_iterator MapIterator;
			 for (MapIterator iter = mapex.begin(); iter != mapex.end(); iter++)
			 {
			 cout << "Key: " << iter->first << endl << "Values:" << endl;
			 typedef list<string>::const_iterator ListIterator;
			 for (ListIterator list_iter = iter->second.begin(); list_iter != iter->second.end(); list_iter++)
			 cout << " " << *list_iter << endl;
			 }*/
			break;
		} //case '4'

		case ('5'): {
			cout << left << setw(15) << "Employee ID" << left << setw(25)
					<< "Name" << setw(20) << "Type" << setw(20) << "Hire Date"
					<< endl;

			cout << left << setw(15) << "----------" << left << setw(25)
					<< "-------------" << setw(20) << "-------" << setw(20)
					<< "-------" << endl;

			pwList.gotoFirst();
			for(int i = 0; i < pwList.size(); i++) {
				cout << left << setw(15) << pwList.getCurrent().getEmployeeID()
						<< left << setw(25) << pwList.getCurrent().getName()
						<< setw(20) << pwList.getCurrent().printClassName()
						<< setw(20) << pwList.getCurrent().printHDate() << endl;
				pwList.gotoNext();
			}

			ssList.gotoFirst();
			for(int i = 0; i < ssList.size(); i++) {
				cout << left << setw(15) << ssList.getCurrent().getEmployeeID()
						<< left << setw(25) << ssList.getCurrent().getName()
						<< setw(20) << ssList.getCurrent().printClassName()
						<< setw(20) << ssList.getCurrent().printHDate() << endl;
				ssList.gotoNext();
			}

			tlList.gotoFirst();
			for(int i = 0; i < tlList.size(); i++) {
				cout << left << setw(15) << tlList.getCurrent().getEmployeeID()
						<< left << setw(25) << tlList.getCurrent().getName()
						<< setw(20) << tlList.getCurrent().printClassName()
						<< setw(20) << tlList.getCurrent().printHDate() << endl;
				tlList.gotoNext();
			}

			break;
		}
		case ('9'): {
			/*for (int i = 0; i < PWNum; i ++){
			 delete myProductionWorkers[i];
			 }
			 for (int i = 0; i < SSNum; i ++){
			 delete myShiftSupervisors[i];
			 }
			 for (int i = 0; i < TLNum; i ++){
			 delete myTeamLeaders[i];
			 }*/
			cout << "Program ending. Have a nice day~"<< endl;
			delete &pwList;
			delete &ssList;
			delete &tlList;
			break;
		}
		default:
			cout << "Invalid menu option entered. Please try again.\n";
		} //switch

	} while (userChoice != '9'); //do
	return 0;
}
