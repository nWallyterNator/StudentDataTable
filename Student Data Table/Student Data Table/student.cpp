#include "roster.h"
#include "student.h"
#include "degree.h"
#include <iostream>
#include <iomanip>


using namespace std;
/**************************************************************
D2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1

b.  a mutator (i.e., setter) for each instance variable from part D1

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

d.  constructor using all of the input parameters provided in the table

e.  print() to print specific student data

********************************************************************/



StuDenT:: StuDenT()
{
	
	// use a this pointer for stuent id
	this -> HobbiTID = "";
	// for first name
	this -> BilbO = "";
	// for last name
	this -> BagginS = "";
	// email address
	this -> BagEnD = "";
	// student age
	this->FourthAgE = 0;
	// this for number of days left - need a for loop
	for (int i = 0; i < TheNinE; i++) {
		this -> RingWraithS[i] = 0;
	}
	// this for degreeprogram
	this->thefellowship = TheFellowShiP::UNDECLARED;
	
}

// need a full constructor
StuDenT::StuDenT(
	string HobbiTID,
	string BilbO,
	string BagginS,
	string BagEnD,
	int FourthAgE,
	double RingWraithS[],
	TheFellowShiP thefellowship) {

	// need to"fill" the constructor with this pointers
	//student id
	this -> HobbiTID = HobbiTID;
	// first name
	this -> BilbO = BilbO;
	// last name
	this -> BagginS = BagginS;
	// email address
	this -> BagEnD = BagEnD;
	// age(int)
	this -> FourthAgE = FourthAgE;
	// for loop for the num of days left
	for (int i = 0; i < TheNinE; i++) {
		this -> RingWraithS[i] = RingWraithS[i];
	}
	// this for degree program
	this->thefellowship = thefellowship;
}

/******* Print Function ***********/

void StuDenT::PriNT() {
	//get the id with this and tab
	cout << this->getHobbiTID() << '\t';
	// get first name repeat
	cout << this->getBilbO() << '\t';
	// last name repeat
	cout << this->getBagginS() << '\t';
	// email 
	cout << this->getBagEnD() << '\t';
	// age
	cout << this->getFourthAgE() << '\t';
	//days left
	cout << this->getRingWraiths()[0] << '\t';
	cout << this->getRingWraiths()[1] << '\t';
	cout << this->getRingWraiths()[2] << '\t';

	// degree program and endline
	cout << thefellowshiPStrings[this->getTheFellowShiP()] << '\n';
}

/***** Accessors and Mutators*****/
	
	//getter for first name
	string StuDenT:: getBilbO() {
		return this -> BilbO;
	}
	// setter for first name
	void StuDenT:: setBilbO(string BilbO) {
		this -> BilbO = BilbO;
	}

	//getter for last name
	string StuDenT:: getBagginS() {
		return this -> BagginS;
	}
	// setter for last name
	void StuDenT:: setBagginS(string BagginS) {
		this -> BagginS = BagginS;
	}
	

	// getter for email address
	string StuDenT:: getBagEnD() {
		return this -> BagEnD;
	}
	
	// setter for email addres
	void StuDenT:: setBagEnD(string BagEnD) {
		this -> BagEnD = BagEnD;
	}

	
	// getter for age
	int StuDenT:: getFourthAgE() {
		return this -> FourthAgE;
	}
	
	// setter for age
	void StuDenT:: setFourthAgE(int FourthAgE) {
		this -> FourthAgE = FourthAgE;
	}

	
	//getter for days left in course
	double* StuDenT::getRingWraiths() {
		return this -> RingWraithS;
	}
	
	// setter for days left
	void StuDenT:: setRingWraithS(double RingWraithS[]) {
		for (int i = 0; i < TheNinE; i++)
			this -> RingWraithS[i] = RingWraithS[i];
	}

	
	// getter for degree program
	TheFellowShiP StuDenT:: getTheFellowShiP() {
		return this -> thefellowship;
	}
	
	//setter for degree program
	void StuDenT:: setTheFellowShiP(TheFellowShiP RinG) {
		this -> thefellowship = RinG;
	}

	
	// getter for student id
	string StuDenT::getHobbiTID() {
		return this->HobbiTID;
	}
	
	
	// setter for student id
	void StuDenT::setHobbiTID(string HobbiTID) {
		this->HobbiTID = HobbiTID;
	}