// convertSecondsToMinutes.cpp : A simple C++ program that utilizes the modulus operator to convert time
// Carrie Ward 08/18/17

#include <iostream>
using namespace std;


int main()
{
	int seconds, minutes, remainingSeconds;

	// Request number of seconds
	cout << "\nEnter the number of seconds you wish to convert: ";
	// Store the user input
	cin >> seconds;

	// Convert seconds to minutes using division
	minutes = seconds / 60;
	//calculate the left over seconds using the modulus operator
	remainingSeconds = seconds % 60;

	// Display the results
	cout << "\n" << seconds << " seconds is equivalent to: \n";
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << remainingSeconds << "\n" << endl;

    return 0;
}

