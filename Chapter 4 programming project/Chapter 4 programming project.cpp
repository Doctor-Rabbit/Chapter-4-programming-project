#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
	// Leap year logic based on rules provided
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	}
	return false;
}

// Function to returnthe number of days in a given month
int daysInMonth(int month, int year) {
	// Array containing the number of days for each month in a non-leap year
	int daysInMonthArray[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// If it's February and it's a leap year. return 29 days
	if (month == 2 && isLeapYear(year)) {
		return 29;
	}

	return daysInMonthArray[month - 1];
}

int main() {
	int month, year;

	// Input validation for month
	do {
		cout << "Enter a month (1-12): ";
		cin >> month;
		if (month < 1 || month > 12) {
			cout << "Invalid month! Please enter a number between 1 and 12.\n";
		}
	} while(month < 1 || month > 12);

	// Input for year
	cout << "Enter a year: ";
	cin >> year;

	// Output the number of days in the specified month
	cout << daysInMonth(month, year) << " days\n";

	return 0;
}