#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
	const double PI = 3.14159;
	return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
	return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
	return 0.5 * base * height;
}

// Function to get a positive value from the user
double getPositiveInput(const string& prompt) {
	double value;
	do {
		cout << prompt;
		cin >> value;
		if (value <= 0) {
			cout << "Error: Please enter a positive value.\n";
		}
	} while (value <= 0);
	return value;
}

int main() {
	int choice;
	do {
		// Display Menu
		cout << "Geometry Calculator\n";
		cout << "1. Calculate the Area of a Circle\n";
		cout << "2. Calculate the Area of a Rectangle\n";
		cout << "3. Calculate the Area of a Triangle\n";
		cout << "4. Quit\n";
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		if (choice == 1) {
			// Calculate area of a circle
			double radius = getPositiveInput("Enter the raduis of the circle: ");
			double area = calculateCircleArea(radius);
			cout << "The area of the circle is: " << area << endl;
		}
		else if (choice == 2) {
			// Calculate area of a rectangle
			double length = getPositiveInput("Enter the length of a rectangle: ");
			double width = getPositiveInput("Enter the width of the rectangle: ");
			double area = calculateRectangleArea(length, width);
			cout << "The area of a rectangle is: " << area << endl;
		}
		else if (choice == 3) {
			// Calculate area of a triangle
			double base = getPositiveInput("Enter the base of the triangle: ");
			double height = getPositiveInput("Enter the height of the triangle: ");
			double area = calculateTriangleArea(base, height);
			cout << "The area of the triangle is: " << area << endl;
		}
		else if (choice == 4) {
			cout << "Exiting the program.\n";
		}
		else {
			cout << "Error: Invalid choice. Please enter a number between 1 and 4.\n";
		}
	} while (choice != 4);
	return 0;
}