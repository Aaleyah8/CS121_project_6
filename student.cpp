#include <iostream>
#include "student.h"

Student::Student(){
	studentString = " ";
	firstName = " ";
	lastName = " ";
	dob = new Date(); 
	expectedGrad = new Date();
	Address = new Adress();
	creditHours = 0;
} // end constructor

student::Student(std::string studentString){
	student::init(StudentString);
}

Student::-Student(){
	delete dob;
	delete expectedGrad;
	delete Adress;
} // end constructor

void init(studentString){
	std::string street;
	std::string city;
	std::string state;
	std::string zip;

	getline(street, ss);
	getline(city, ss);
	getline(state, ss);
	getline(zip, ss);
	ss.clear();
}

void Student::printStudent(){
	Std::cout << firstName << " " << lastName << std::endl;
	address -> printAddress();
	
	std::cout "DOB: ";
	dob->printDate();
	expectedGrad->printDate();

	std::cout << "credits: " << creditHours <<std::endl;
	std::cout << "-----------------------------------";
	std::cout << std::endl;

 
std::string Student::getLastFirst(){
	std::stringstream ss;
	ss.clear();
	ss << lastName << ", " << firstName;
	return ss.str();
} // end getLastFirst

std::string Student::getlastName(){
	return getLastName;
}

std::string Student::getfirstName(){
	return getFirstName;
}
