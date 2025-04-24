#include <string>
#ifndef DATE_H
#define DATE_H



class Date {
	protected:
		std::string dateString;
		int month;
		int day;
		int year;
	public:
		Date();
		void init(std::string dateString);
		void printDate() const;
}; // end class def
#endif // DATE_H