#include <iostream> 
#include <sstream>
#include "date.h"

Date::Date(){
	dateString = "0/0/0000";
	init(dateString);
} // end constructor

void Date::init(std::string dateString){
	std::stringstream ss(dateString);
	getline(ss, month, "/");
	getline(ss, day, "/");
	getline(ss, year, "/");
}
	
void Date::printDate() const {
	std::cout << "Date: " << month << "/" << day << "/" << year << std::endl;
}

