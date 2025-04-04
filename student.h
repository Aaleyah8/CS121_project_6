#include <string>
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#endif

class student{ 
	protected:
		studentString;
		std::string firstName;
		std::string lastName;
		date* dob;
		date* expectedGrad;
		address* Address;
		int creditHours;
	public:
		Student();
		-Student();
		void init(studentString);
		void printStudent();
		std::string getLastFirst();
}; // end class def
