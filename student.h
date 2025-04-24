#include <string>
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "date.h"
#include "address.h"

class Student{ 
	protected:
		std::string studentID;
		std::string firstName;
		std::string lastName;
		Date* dob;
		Date* expectedGrad;
		Address* address;
		int creditHours;
	public:
		Student();
		Student(std::string studentID, std::string firstName, std::string lastName, Date* dob, Date* expectedGrad, Address* address, int creditHours);
		~Student();
		void init(std::string studentID, std::string firstName, std::string lastName, Date* dob, Date* expectedGrad, Address* address, int creditHours);
		void printStudent() const;
		std::string getLastFirst() const;
		std::string getLastName() const;
		std::string getFirstName() const;
}; // end class def
#endif // STUDENT_H