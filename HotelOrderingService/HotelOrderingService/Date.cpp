#include "Date.h"
using namespace std;

Date::Date()
{
	day = 1;
	month = 1;
	year = 2020;
}

Date::Date(const int day, const int month, const int year)
{
	setDate(day, month, year);
}

void Date::setDate(const int day, const int month, const int year)
{
	if (day < 1 || day > 30)
	{
		throw ("Error: invalid day!");
	}

	if (month < 1 || month > 12)
	{
		throw ("Error: invalid month!");
	}

	if (year < 2020 || year > 2025)
	{
		throw ("Error: invalid year!");
	}

	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(const Date& other)
{
	*this = other;
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

const Date& Date::operator=(const Date& other)
{
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;

	return *this;
}

bool Date::operator==(const Date& other) const
{
	return (day == other.day && month == other.month && year == other.year);
}

const bool Date::operator>(const Date& other) const
{
	return ((year > other.year) ? true : ((year < other.year) ? false :
		((month > other.month) ? true : ((month < other.month) ? false :
		((day > other.day) ? true : false)))));
}

ostream& operator<<(ostream& out, const Date& other)
{
	out << other.day << "/" << other.month << "/" << other.year;
	return out;
}