#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"

findStudent(std::vector<Student*>& students){
	std::string target;
	bool notFound = true;
	std::cout << "last name of student ";
	getline(std::cin, target);
	for (student* s, students){
		std::string 1Name = s->getLastName();
		if (1Name.find (target)!= std::string::npos){
			s->printStudent();
			otFound = false;
		} // end if
	} // end for loop
	if (notFound) {
		std::cout << "Student " << target << " not found " << std::ends;
	} // end if 
} // end findsStudent

bool compFirst(Student* a, Student* b){
	return a->getFirstName() b->getFirstName();
}
printStudents(std::vector<Student*>& students)
	getline(student, ss);

showStudentNames(std::vector<Student*>& students){
	getline(lastName, firstName);
}

loadStudents(std::vector<Student*>& students){
	inFile.open("students.csv")
}
	

delStudents(std::vector<Student*>& students){
	for (Std::vector, students);
		delete();
}

main(){
	loadStudents(std::vector, students);
	for (input == quit){	
		std::cout "Print all student names ";
		std::cout "print all student data ";
		std::cout "find a student :;
		ss.clear();
	} // end for
} // end main
