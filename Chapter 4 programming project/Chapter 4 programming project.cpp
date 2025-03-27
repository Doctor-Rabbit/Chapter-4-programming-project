#include <iostream>
using namespace std;

// Function to calculate the shipping charge based on weight and distance
double calculateCharge(double weight, double distance) {
	double rate;

	// Determine the rate per 500 miles based on the weight of the package
	if (weight <= 2.0) {
		rate = 1.10;
	}
	else if (weight <= 6.0) {
		rate = 2.20;
	}
	else if (weight <= 10.0) {
		rate = 3.70;
	}
	else if (weight <= 20.0) {
		rate = 4.80;
	}
	else {
		return 0.0; // This should not occur because of input validation
	}

	// Calculate the total charge based on the distance
	double totalCharge = (distance / 500) * rate;
	return totalCharge;
}

int main() {
	double weight, distance;

	// Input validation for weight
	do {
		cout << "Enter the weight of the package (greater than 0 and less than or equal to 20 kg): ";
		cin >> weight;
		if (weight <= 0 || weight > 20) {
			cout << "Invalid weight! Please enter a weight greater than 0 and less than or equal to 20 kg.\n";
		}
	} while (weight <= 0 || weight > 20);

	// Input validation for distance
	do {
		cout << "Enter the distance to be shipped (between 10 and 3000 miles): ";
		cin >> distance;
		if (distance < 10 || distance > 3000) {
			cout << "Invalid distance! Please enter a distance between 10 and 3000 miles.\n";
		}
	} while (distance < 10 || distance > 3000);

	// Call the function to calculate the charge
	double totalCharge = calculateCharge(weight, distance);

	// Display the charge
	cout << "The shipping charge is: $" << totalCharge << endl;

	return 0;
}