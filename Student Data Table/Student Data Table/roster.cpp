#include "roster.h"
#include "student.h"
#include "degree.h"

using namespace std;

/*******************************************************
E2.  Create a student object for each student in the data table and populate classRosterArray.

a.  Parse each set of data identified in the “studentData Table.”

b.  Add each student object to classRosterArray.

E3.  Define the following functions:

a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.

b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.

d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.


Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').


f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.

************************************************************************************************88***********/



/***************************

	Parse Function

****************************/

// this will extract from the main thing
void RoSteR:: ParSE(string MiddleEarth) {
	// this will find the first comma- make a new int
	int FrodO = MiddleEarth.find(",");
	// extracts to the left, to get the student id
	string DwarFID = MiddleEarth.substr(0, FrodO);


	// extracts to find the next set of commas to get the first name new int
	int GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// find a new first name object
	string OrC = MiddleEarth.substr(GandalF, FrodO - GandalF);


	// extracts to find the next set of commas for the new last name
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object for last name
	string GamgeE = MiddleEarth.substr(GandalF, FrodO - GandalF);



	//Repeat to find new email
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object for email
	string GondoR = MiddleEarth.substr(GandalF, FrodO - GandalF);



	// repeat for age
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object age
	double ThirdAgE = stod(MiddleEarth.substr(GandalF, FrodO - GandalF));


	// repeat for days left
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object for days left
	double BattleOfIsengarD1 = stod(MiddleEarth.substr(GandalF, FrodO - GandalF));
	// repeat for days left2
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object for days left
	double BattleOfIsengarD2 = stod(MiddleEarth.substr(GandalF, FrodO - GandalF));
	// repeat for days left
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object for days left3
	double BattleOfIsengarD3 = stod(MiddleEarth.substr(GandalF, FrodO - GandalF));



	// repeat for degree program
	GandalF = FrodO + 1;
	FrodO = MiddleEarth.find(",", GandalF);
	// new object for degree program
	string SmauG = MiddleEarth.substr(GandalF, FrodO - GandalF);


	// checks the string to determine the degree prgm
	TheFellowShiP RinG;
	// if statement  for security
	if (SmauG.substr() == "SECURITY") {

		RinG = SECURITY;
	}
	// else state ment for network
	else if (SmauG.substr() == "NETWORK") {

		RinG = NETWORK;
	}
	// else if  for software
	else if (SmauG.substr() == "SOFTWARE") {

		RinG = SOFTWARE;
	}


	
	/**************************
	
	Add parsed data to the row

	***************************/
	
	
	// use the new objects just made
	AdD(DwarFID, OrC, GamgeE,
		GondoR, ThirdAgE,
		BattleOfIsengarD1,
		BattleOfIsengarD2,
		BattleOfIsengarD3, RinG);
}

	/******************
	 
		ADD function 
	
	********************/


void RoSteR:: AdD
(string DwarFID, string LegolaS,
	string TooK, string MordoR, int AgeOfMeN,
	double Wars1, double WarS2, double WarS3,
	TheFellowShiP RinG) {
	
	// make an array to hold the number of days
	double EntsArray[3] = { static_cast<double>(Wars1),
	static_cast<double>(WarS2),
	static_cast<double>(WarS3) };

	// new student object
	ShireArray[++OneRinG] = new StuDenT
		// needs student id
		(DwarFID,
			// needs first name
			LegolaS,
			// needs last name
			TooK,
			// neeeds email
			MordoR,
			// needs age
			AgeOfMeN,
			// needs new array of days
			EntsArray,
			// needs dgree prgm
			RinG);

	}


/*****************************

	Find the wrong Email Function

	******************************/


	// this will find and print out invalid emails
void RoSteR::PrintWrongEmailAddresS() {

	//need a bool for invalid email
	bool WormtonguE = false;

	for (int i = 0; i <= RoSteR::OneRinG; i++) {

		string GondoR = (ShireArray[i]->getBagEnD());

		if (GondoR.find('@') == string::npos ||
			(GondoR.find('.') == string::npos ||
				(GondoR.find(' ') != string::npos))) {

			WormtonguE = true;

			cout << "These Email Addresses Are Wrong: " << ShireArray[i]->getBagEnD() << endl;
		}
	}

	if (!WormtonguE) cout << "Every Email Address is Valid" << endl;

}



/********************** 

	Remove function 

***********************/



// this will remove students based on student id. Will print out an error if not found
void RoSteR:: TakeAwaY(string HobbiTID) {

	// need a bool object 
	bool InvisiblE = false;
	// need a for loop
	for (int i = 0; i <= RoSteR:: OneRinG; i++) {
		// need an if
		if (ShireArray[i]->getHobbiTID() == HobbiTID) {

			InvisiblE = true;
			//another if loop
			if (i < ThreeElvenRingS - 1) {

				StuDenT* temp = ShireArray[i];
				ShireArray[i] = ShireArray[ThreeElvenRingS - 1];
				ShireArray[ThreeElvenRingS - 1] = temp;

			}
		}	RoSteR::OneRinG--;
	}
		if (InvisiblE) {
			cout << "Student With Student Id: " << HobbiTID << " Has Been Erased From The Table, " << endl;
		}
		else
			cout << "Student ID: " << HobbiTID << " Wasn't Found! Please Try Again! " << endl;
	}


	
/************************
	
	Print Student DAta
	
*************************/

	
// this will print all the student data
	void RoSteR:: PrintAlL() {

		for (int n = 0; n <ThreeElvenRingS ; n++){
			ShireArray[n]->PriNT();
			/***************** Revision with print function 04/27*****************************
			// get the student id and tab
			cout << ShireArray[i] -> getHobbiTID() << '\t';

			//get first name
			cout << ShireArray[i] -> getBilbO() << '\t';

			// get lst name
			cout << ShireArray[i] -> getBagginS() << '\t';

			// get email address
			cout << ShireArray[i] -> getBagEnD() << '\t';

			// get age
			cout << ShireArray[i] -> getFourthAgE() << '\t';

			//get days 1,2,3
			cout << ShireArray[i] -> getRingWraiths()[0] << ", ";
			cout << ShireArray[i] -> getRingWraiths()[1] << ", ";
			cout << ShireArray[i] -> getRingWraiths()[2] << '\t';

			// get degree program
			cout << thefellowshiPStrings[ShireArray[i] -> getTheFellowShiP()] << endl;

			****************************************************************************/
		}


	}



	
	/********************************
	
	Average number of days in courses
	
	*********************************/

	
	// need to add up all the days and /3
	void RoSteR:: PrintAvgDaysLefT(string HobbiTID) {

		for (int i = 0; i <= RoSteR:: OneRinG; i++) {

			if (this -> ShireArray[i] -> getHobbiTID() == HobbiTID) {

				cout << "Student Id: " << ShireArray[i]->getHobbiTID();
				// make an aver variable
				double BreE = (ShireArray[i] -> getRingWraiths()[0]
					+ ShireArray[i] -> getRingWraiths()[1]
					+ ShireArray[i] -> getRingWraiths()[2] / 3.0);

				cout << " Averages " << BreE << " Days Left Per Course" << endl;
			}

		}
	}


	
	
/***************************

By Degree program function

****************************/



//this will print a student by a specifc degree prgm
	void RoSteR::PrintByDegreePrograM(TheFellowShiP RinG) {

		for (int i = 0; i <= RoSteR::OneRinG; i++) {

			if (RoSteR::ShireArray[i]->getTheFellowShiP() == RinG)

				ShireArray[i]->PriNT();

		}
	}


