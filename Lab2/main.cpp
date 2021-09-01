/*
	Jayce Abens
	FA2021
	Due: 
	Lab 2 Exploring Output
*/

#include <iostream>

using namespace std;		// specifies standard namespace to reduce "std" repitition in program

void printSchedule();		// delcares funtion to print my weekly schedule
void printCheckerboard();	// declares funtion to print a checkerboard patern

const string day[5] =				// declares an array of strings containing each weekday and a black space
{ 
	"Monday     ", 
	"Tuesday    ", 
	"Wednesday  ", 
	"Thursday   ", 
	"Friday     "
};
const string collegeMWF[2] =		// declares an array of strings containing the times and class names of my M,W,F ICCC classes
{
	"8:00-9:30       Composition 1",
	"10:00-11:00     C++",
};
const string collegeTH[2]	=		// declares an array of strings containing the times and class names of my T,H ICCC classes
{
	"8:20-9:20       Engineering Problems",
	"10:00-11:00     C++"
};
const string hsPeriod[5] =		// declares an array of strings containing the times and class names of my high school classes
{ 
	"11:51-12:11     Lunch", 
	"12:11-12:55     Band", 
	"12:59-1:41      Spanish 4", 
	"1:45-2:27       Government", 
	"2:31-3:13       Economics" 
};

const string oddRow = "    *         *         *         *";	// declares a string containing the odd numbered rows' spacing
const string evenRow = "*        *         *         *";		// declares a string containing the even numbered rows' spacing

int main()
{
	printSchedule();					// calls the function to print my schedule
	cout << endl << endl << endl;		// creates space between the two portions of this assignment
	printCheckerboard();				// calls the function to print the checkerboard
	return 0;
}

void printSchedule()
{
	for (int i = 0; i < 5; i++)					// loops 5 times (5 weekdays), incrementing integer "i" by one
	{
		for (int j = 0; j < 2; j++)				// loops 2 times (2 college classes per day), incrementing integer "j" by one
		{
			cout << day[i];						// outputs the weekday to the console
			if (i == 0 || i == 2 || i == 4)		// if the day is Monday, Wednesday, or Friday
			{ 
				cout << collegeMWF[j];			// output the MWF schedule to the console
			}
			else 
			{ 
				cout << collegeTH[j];			// otherwise, output the Tuesday,Thursday schedule to the console
			}
			cout << endl;						// ends line after each "day, time, class" entry
		}
		for (int k = 0; k < 5; k++)				// loops 5 times (5 high school classes), incrementing integer "k" by one
		{
			cout << day[i];						// outputs the weekday to the console
			cout << hsPeriod[k];				// outputs the high school time and class to the console
			cout << endl;						// ends line after each "day, time, class" entry
		}
		cout << endl;							// ends line after each entire day's schedule is printed
	}
}

void printCheckerboard()
{
	for (int i = 0; i < 4; i++)					// loops 4 times, printing 2 rows each = 8 rows
	{
		cout << oddRow << endl;					// outputs the odd row string to the console
		cout << evenRow << endl;				// outputs the even row string to the console
	}
}