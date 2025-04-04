#include <iostream> 
#include <sstream>
#include "date.h"

Date::Date(){
	dateString = "0/0/0000";
	month = 0;
	day = 0;
	year = 0;
} // end constructor

Date::Date(){
	date::init(dateString);
}

void Date::init(std::string dateString){
	std::string month;
	std::string day;
	std::string year;
	
	getline(ss, month, "/");
	getline(ss, day, "/");
	getline(ss, year, "/");
	ss.clear();
}
	
void Date::printDate(){
	std::cout << "month: ";
	std::cout << "day: ";
	std::cout << "year: ";
	std::cout << std::endl;
}

