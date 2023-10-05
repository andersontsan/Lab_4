// Lab_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	int n;
	int result = 1;
	cout << "Please enter a value:" << endl;
	cin >> n;

	while (n < 0) {
		cout << "Please enter a positive value: ";
		cin >> n;
	}

	for (int i = 1; i <= n; i++) {
		result = result * i;
	}

	cout << "Factorial of " << n << " = " << result << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
	float difference;
	float startingNumber;
	int numElements;

	cout << "Please enter a number to start:";
	cin >> startingNumber;

	cout << "Please enter a number to add each time:";
	cin >> difference;

	cout << "Please enter the number of elements in the series:";
	cin >> numElements;

	while (numElements < 0) {
		cout << "Please enter a positive value: ";
		cin >> numElements;
	}

	float sum = 0;
	for (int i = 0; i < numElements; i++) {
		sum = sum + (startingNumber + i * difference);
		if (i > 0) {
			cout << " + ";
		}
		cout << (startingNumber + i * difference);
	}
	cout << "= " << sum << endl;

}

void geometric() {
	// I recommend writing your geometric series code here
	float startingNumber;
	int multiplier;
	int numElements;

	cout << "Please enter a number to start:";
	cin >> startingNumber;

	cout << "Please enter a number to add each time:";
	cin >> multiplier;

	cout << "Please enter the number of elements in the series:";
	cin >> numElements;

	while (numElements < 0) {
		cout << "Please enter a positive value: ";
		cin >> numElements;
	}

	float sum = 0;
	for (int i = 0; i < numElements; i++) {

		if (i > 0) {
			cout << " + ";
		}
		cout << startingNumber;
		sum = sum + startingNumber;
		startingNumber = startingNumber * multiplier;
	}

	cout << " = " << sum << endl;

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
