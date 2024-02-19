#pragma once
#include "student.h"
#include <iostream>

using namespace std;

/*****************************************************
E.  Create a Roster class (roster.cpp) by doing the following:

E1.  Create an array of pointers, classRosterArray, 
to hold the data provided in the “studentData Table.”


******************************************************/

// Create the Roster class
class RoSteR {

private:
	//declare the last index
	int OneRinG = -1;

	// make the array size constant to hold the student data number of students
	const static int ThreeElvenRingS = 5;

	// this will hold the student data
	StuDenT* ShireArray[ThreeElvenRingS];

public:
	
	/**** Functions***/

	
	/**** Print all funciton ******/
	// print call to have a complete list print out
	void PrintAlL();



	/***Print invalid emails function *****/

	// how to show all the invalid emails
	void PrintWrongEmailAddresS();

	
	
	/***** AVe  function**/

	//how to get the average of the students ave of days left in courses, 3 slots
	void PrintAvgDaysLefT(string DwarFID);

	
	/****** Print by Degree Type *******/
	
	
	// how to print the data based on degree
	void PrintByDegreePrograM(TheFellowShiP RinG);


	/****** Remove Function**************/

	// how to find student by id/remove from the object
	void TakeAwaY(string DwarFID);

	// parse function to extract data
	void ParSE(string row);


	/*** add function****/
	
	// this will extract from the parsed and make a new object
	void AdD
		// new student id
		(string DwarFID,
			// new first name
			string LegolaS,
			// new last name
			string TooK,
			// new email 
			string MordoR,
			// new age
			int AgeOfMeN,
			// new days left
			double Wars1,
			double WarS2,
			double WarS3,
			// new degree program use the same degree progrm
			TheFellowShiP RinG);
};