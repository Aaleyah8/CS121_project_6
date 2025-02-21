#include <iostreeam>
#include "address.h"

Date::Date(){
	street = " ";
	city = " ";
	state = " ";
	zip = " ";

}; // end constructor

adress::Address(){
	Address::string street;
	Address::string city;
	Address::string state;
	Address::string zip;
}
void Address::init(std::string street, std::string city, 
		std::string state, std::string zip){
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;

void printAddress(){
	std::cout << "street: ";
	std::cout << "city: ";
	std::cout << "state: ";
	std::cout << "zip: ";
	std::cout << std::end1;
}

