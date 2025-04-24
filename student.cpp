#include <iostream>
#include <sstream>
#include "student.h"

Student::Student(){
	studentID = " ";
	firstName = " ";
	lastName = " ";
	dob = new Date(); 
	expectedGrad = new Date();
	address = new Address();
	creditHours = 0;
} // end constructor

Student::Student(std::string studentID, std::string firstName, std::string lastName, Date* dob, Date* expectedGrad, Address* address, int creditHours){
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->dob = dob;
	this->expectedGrad = expectedGrad;
	this->address = address;
	this->creditHours = creditHours;
}

Student::~Student(){
	delete dob;
	delete expectedGrad;
	delete address;
} // end constructor
 
void Student::init(std::string studentID, std::string firstName, std::string lastName, Date* dob, Date* expectedGrad, Address* address, int creditHours){
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->dob = dob;
	this->expectedGrad = expectedGrad;
	this->address = address;
	this->creditHours = creditHours;
}

void Student::printStudent() const{
	std::cout << firstName << " " << lastName << std::endl;
	address->printAddress();
	
	std::cout << "DOB: ";
	dob->printDate();
	expectedGrad->printDate();

	std::cout << "credits: " << creditHours <<std::endl;
	std::cout << "-----------------------------------";
	std::cout << std::endl;
}
 
std::string Student::getLastFirst() const {
	std::stringstream ss;
	ss << lastName << ", " << firstName;
	ss.clear();
	return ss.str();
} // end getLastFirst

std::string Student::getLastName() const {
	return lastName;
}

std::string Student::getFirstName() const{
	return firstName;
}
