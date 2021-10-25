#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	// Constructors
	Date();
	Date(const int day, const int month, const int year = 2020);
	Date(const Date& other);

	// Set Methods
	void setDate(const int day, const int month, const int year = 2020);

	// Get Methods
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	// Operators
	const Date& operator=(const Date& other);
	bool operator==(const Date& other) const;
	const bool operator>(const Date& other) const;
	friend std::ostream& operator<<(std::ostream& out, const Date& other);
};

#endif // !DATE_H