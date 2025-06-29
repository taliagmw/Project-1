#include "Clock.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
/**
 * Creating instance for Clock class
 * @param h Starting Hour
 * @param m Starting Minute
 * @param s Starting Second
 */
Clock::Clock(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
}
/**
 * using modulus operator to get the hour will provide proper hour for the 24H clock
 * using modulus operator to get the minute will provide proper minute
 * using modulus operator to get the minute will provide proper minute
 * using modulus operator to get the hour12 will provide proper hour for the 12H clock
 */
void Clock::addHour() {
	hour = (hour + 1) % 24;
}
void Clock::addMinute() {
	minute = (minute + 1) % 60;
	if (minute == 0) {
		addHour();
	}
}
void Clock::addSecond() {
	second = (second + 1) % 60;
	if (second == 0) {
		addMinute();
	}
}
void Clock::displayClocks() {
	int hour12 = hour % 12;
	if (hour12 == 0) {
		hour12 = 12;
	}
/**
 * adding ternary operator (?) instead of creating two separate instances for the 24H and 12H clocks
 * run code and then adjust spacing and * to check that everything lines up
 * setfill('0') is a manipulator that sets the fill character to 0 in this case and setw(2) is a manipulator to set the width to 2 in this case
 */
	string meridian = hour < 12 ? "AM" : "PM"; 
	cout << "*******************  *******************" << endl;
	cout << "* 24 Hour Display *  * 12 Hour Display *" << endl;
	cout << "*******************  *******************" << endl;
	cout << "*     "
		<< setfill('0')
		<< setw(2) << hour << ":"
		<< setw(2) << minute << ":"
		<< setw(2) << second << "    *  *  "
		<< setw(2) << hour12 << ":"
		<< setw(2) << minute << ":"
		<< setw(2) << second << " " << meridian << "    *" << endl;
	cout << "*******************  *******************" << endl;
}