#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student{
	private:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date* dob;
		Date* expectedGrad;
		Address* Address;
		int creditHours;
	public:
		Student();
		-Student();
		void init(studentString);
		void printStudent();
		string getLastFirst();
}; // end class def

