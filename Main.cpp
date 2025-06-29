#include "Clock.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
/**
 *prints Menu
 *adding menu choices 1, 2, 3, 4 for the do function
 *add in an exit option 
 */
void printMenu() {
	cout << endl << "1. Add Hour" << endl;
	cout << "2. Add Minute" << endl;
	cout << "3. Add Second" << endl;
	cout << "4. Exit" << endl;
}
/**
 *create Main Loop so user can add input 
 *cin allows user to add their input then compiles it into the loop
 */
int main() {
	int choice = 0;
	int h, m, s;
	cout << "Enter Current Hour: ";
	cin >> h;
	cout << "Enter Current Minute: ";
	cin >> m;
	cout << "Enter Current Second: ";
	cin >> s;
	Clock clock(h, m, s);
/**
 *add the cases into the do while function
 *system("cls") (for Windows) clears console screen system("clear") (other operating systems)
 *default will show that user provided an invalid choice and prompts them to press enter to continue
 */
	do {
		system("cls");
		clock.displayClocks();
		printMenu();
		cout << endl << "Enter Your Choice: " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			clock.addHour();
			break;
		case 2:
			clock.addMinute();
			break;
		case 3:
			clock.addSecond();
			break;
		case 4:
			cout << "Exiting" << endl;
			break;
		default: {
			cout << "Invalid Choice, Try Again, Press Enter To Continue" << endl;
			cin.ignore();
			cin.get();
		}
		}
	} while (choice != 4);
/**
 *return 0 is an exit code which prompts the system that the program executed properly
 */
	return 0;
}

