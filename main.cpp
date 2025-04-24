#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"

void findStudent(std::vector<Student*>& students){
	std::string target;
	bool notFound = true;
	std::cout << "last name of student ";
	getline(std::cin, target);
	for (Student* s : students){
		std::string lastName = s->getLastName();
		if (lastName.find (target)!= std::string::npos){
			s->printStudent();
			notFound = false;
		} // end if
	} // end for loop
	if (notFound) {
		std::cout << "Student " << target << " not found " << std::ends;
	} // end if 
} // end findsStudent

bool compFirst(Student* a, Student* b){
	return a->getFirstName() < b->getFirstName();
}
void printStudents(std::vector<Student*>& students) {
	for (Studemt* s : students) {
		s->printSudent();
	} // end for
}

void showStudentNames(std::vector<Student*>& students){
	for (Student* s : students) {
		std::cout << s->getLastName() << ", " << s->getFirstName() << std::endl;
	} // end for
}

void loadStudents(std::vector<Student*>& students){
	std::ifstream inFile.open("students.csv");
	if (!inFile) {
		std::cout << "Error opening file." << std::endl;
		return;
	}
	std::string studentID, firstName, lastName;
	while (inFile >> studentID >> firstName >> lastName) {
		students.push_back(new Student(sudentString, firstName, lastName));
	}
	inFile.close
}
	

void delStudents(std::vector<Student*>& students){
	for (Student* s : students) {
		delete s;
	}
	students.clear();
}

int main(){
	std::vector<Student*> students;
	loadStudents(students);
	bool running = true;
	while (running){	
		std::cout << "1) Print all student names\n";
		std::cout << "2) print all student data\n";
		std::cout << "3) find a student\n";
		std::cout << "0} Quit\n";
		std::cout << "Enter choice: "

		std::string choice;
		std::cin >> choice;

		if (choice == "1") {
			showStudentNames(students);
		} else if (choice == "2") {
			printStudents(students);
		} else if (choice == "3") {
			findStudents(students);
		} else if (choice == "0") {
			running = false;
		} else {
			std::cout << "Invalid choice.\n"
		}
		
	} // end for
} // end main
