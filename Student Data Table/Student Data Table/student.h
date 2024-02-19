#pragma once
#include <iostream>
#include "degree.h"

#include <string>

/***********************************************************************
Requirements for D
D  For the Student class, do the following:

D1.  Create the class Student  in the files student.h and student.cpp, 

which includes each of the following variables:

-  student ID

-  first name

-   last name

  email address

-  age

-  array of number of days to complete each course

-  degree program


D2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1

b.  a mutator (i.e., setter) for each instance variable from part D1

c.  All external access and changes to any instance variables of the Student class
must be done using accessor and mutator functions.

d.  constructor using all of the input parameters provided in the table

e.  print() to print specific student data

*************************************************************************/


// Create the Student class
class StuDenT {

	// Student class' public functions
public:
	const static int TheNinE = 3;

	// Student class' private data members
private:
	// need stud id =HobbiTID
	std:: string HobbiTID;

	// need first name = BilbO
	std:: string BilbO;

	// need last name = BagginS
	std:: string BagginS;

	// need email address = BagEnD
	std:: string  BagEnD;

	// need stud age = FourthAgE
	int FourthAgE;

	// need days left in course = TheNinE
	double RingWraithS[TheNinE];

	// degree program = TheFellowShiP and the fellowship
	TheFellowShiP thefellowship ;

public:
	// Default constructor
	StuDenT();		
	
	
	// Constructor Parmeters
	StuDenT
		// student id string
		(std:: string HobbiTID,
			// first name string
			std:: string BilbO,
			//last name string
			std:: string BagginS,
			//string for email
			std:: string BagEnD,
			// int for age
			int FourthAgE,
			// days left in course
			double RingWraithS[],
			// degree program
			TheFellowShiP thefellowship);

	// Destructor
	~StuDenT();	


	/**** Print function********/

	
	//print to get the students info
	void PriNT();


	/***** Accessors and Mutators *****/ 
	
	
	// setter for number of days left
	void setRingWraithS(double RingWraithS[]);
	//getter for number of days left
	double* getRingWraiths();
	
	// getter for last name
	std:: string getBagginS();
	//setter for last name
	void setBagginS(std:: string BagginS);

	//setter for email address
	void setBagEnD(std::string BagEnD);
	//getter for email address
	std:: string getBagEnD();
	

	//getter for  student Id
	std::string getHobbiTID();
	// setter for student Id
	void setHobbiTID(std::string HobbiTID);

	// getter for age= int
	int getFourthAgE();
	// setter for age
	void setFourthAgE(int FourthAgE);

	
	// setter for degree prgm
	void setTheFellowShiP(TheFellowShiP RinG);
	// getter for degree program
	TheFellowShiP getTheFellowShiP();
	

	//getter for first name
	std::string getBilbO();
	//Setter for first name
	void setBilbO(std::string BilbO);


};

