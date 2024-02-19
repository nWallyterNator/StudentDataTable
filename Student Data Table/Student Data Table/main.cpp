#include <iostream>
#include "degree.h"
#include "roster.h"
#include "student.h"



using namespace std;

/*******************************************************************************************************************************************************************************
F.  Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:

1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.

2.  Create an instance of the Roster class called classRoster.

3.  Add each student to classRoster.

4.  Convert the following pseudo code to complete the rest of the  main() function:

classRoster.printAll();

classRoster.printInvalidEmails();

//loop through classRosterArray and for each element:

classRoster.printAverageDaysInCourse(/*current_object's student id);
classRoster.printByDegreeProgram(SOFTWARE);

classRoster.remove("A3");

classRoster.printAll();

classRoster.remove("A3");

//expected: the above line should print a message saying such a student with this ID was not found.

5.  Implement the destructor to release the memory that was allocated dynamically in Roster.

**********************************************************************************************************************************************************/


int main()
{
	const static int ThreeElvenRingS = 5;
	int i;
	const string MiddleEartH[] =
	{
		// Student info A1
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY,",

		//Student info A2
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK,",

		//Student info A3
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE,",

		//Student info A4
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY,",

		// My information A5
		"A5,Nicholas,Walters,nwalt25@wgu.edu,31,5,5,0,SOFTWARE,"
	};

	// Print out my info
	cout << "\n****************************************************************************************" << endl;
	cout << "Course C867: Scripting & Programming - Applications" << endl;
	cout << "Written In: C++" << endl;
	cout << "Written by: Nicholas Walters" << endl;
	cout << "Student ID: #001013686" << endl;
	cout << "\n****************************************************************************************" << endl;

	
	/***Create an instance called class roster****/

	// need a new class as part of roster
	RoSteR classRosTeR;


	// Add each thing to the table

	for (int i = 0; i < ThreeElvenRingS; i++)
	{
		/****** PARSE Function ****/
		classRosTeR.ParSE(MiddleEartH[i]);
	}


	/****Print All function *****/
	cout << "\n****************************************************************************************" << endl;
	cout << "Displays All Student Data: " << endl;
	classRosTeR.PrintAlL();
	cout << endl;
	cout << "\n****************************************************************************************" << endl;



	/******** Show Wrong Emails*****/
	cout << "\n****************************************************************************************" << endl;
	cout << "Showing Students With Wrong Email Addreses Or Typos: " << endl;
	classRosTeR.PrintWrongEmailAddresS();
	cout << endl;
	cout << "\n****************************************************************************************" << endl;


	/***Looping throug class table and gets the ave day left per course and student*****/
	cout << "\n****************************************************************************************" << endl;
	cout << "The Average Number Of Days Left Per Student In Each Course: " << endl;
	for (int i = 0; i < ThreeElvenRingS; i++) {

		// make a new string for "A" and add it to string
		string GolluM = "A" + to_string(i + 1);

		classRosTeR.PrintAvgDaysLefT(GolluM);
	}
	cout << endl;
	cout << "\n****************************************************************************************" << endl;


	/**** Degree Program Function ****/

	//This will print all the students that are in the software
	cout << "\n****************************************************************************************" << endl;
	cout << "Showing All Students In The SoftWare Program: " << endl;

	classRosTeR.PrintByDegreePrograM(TheFellowShiP::SOFTWARE);
	cout << endl;
	cout << "\n****************************************************************************************" << endl;

	/***Remove Function *****/

	// this will remove with A3
	cout << "\n****************************************************************************************" << endl;
	cout << "Erasing Student ID A3" << endl;

	classRosTeR.TakeAwaY("A3");
	cout << endl;
	classRosTeR.PrintAlL();
	cout << endl;
	cout << "\n****************************************************************************************" << endl;


	// try to do it again
	cout << "\n****************************************************************************************" << endl;
	cout << "Erasing Student ID A3" << endl;
	classRosTeR.TakeAwaY("A3");
	cout << endl;
	cout << "\n****************************************************************************************" << endl;

	// call the system to pause so it doesnt loop for ever
	system("pause");

	return 0;
}