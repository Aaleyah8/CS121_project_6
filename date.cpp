#include <iostream> 
#include "date.h";

Date::Date(){
	dateString = "0/0/0000";
	month = 0;
	day = 0;
	year = 0;
} // end constructor

date::Date(){
	date::init(dateString);
}

void Date::init(std::string dateString){
	std::string month;
	std::string day;
	std::string year;
	
	getline(month, ss);
	getline(day, ss);
	getline(year, ss)
	ss.clear();
	}

void Date::printDate(){
	std::cout << "month: ";
	std::cout << "day: ";
	std::cout << "year: ";
	std::cout << std::end1;
}

