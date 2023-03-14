// Squash_The_Bugs.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  

// This program gets an input of number of gallons of water used from the user.
// It will then calculate a customer's water bill using the following rules:
// A mandatory environmental fee of $15, plus
// $2.35 per 1000 gallons for the first 6000,
// $3.75 per 1000 gallons for over 6000 to 20000,
// $6.00 per 1000 gallons for over 20000.
// The bill is then displayed to the user.

// 1) I commented out this #include because it is unneeded and there is no source file.
//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double gallons, charge = 0, total;
	const int fee = 15;
	double costUpTo6K = 2.35,  // 2) The numbers displayed here are not integers, as seen by the decimal. I changed the type to double.
		costUpTo20K = 3.75,
		costOver20K = 6.00;

	cout << "Enter the total number of gallons used, divided by 1000: ";
	cin >> gallons;

	if (gallons > 20) {
		charge = (gallons - 20) * costOver20K;
		charge = charge + (14 * costUpTo20K);  // 3) Here was a common missing semicolon bug.
		charge = charge + (6 * costUpTo6K);
	}
	else if (gallons > 6 && gallons <= 20) {
		charge = (gallons - 6) * costUpTo20K;  // 4) Here the == was causing a comparison, when it should simply be assigning the given process.
		charge = charge + (6 * costUpTo6K);
	}
	else {
		charge = gallons * costUpTo6K;  // 5) Here the variable was incorrectly typed with all lowercase.
	}


	total = charge + fee;
	cout << "You have used " << gallons << " thousand gallons of water." << endl;
	cout << "Your total water bill is $" << setprecision(2) << fixed << total;  //This was not technically causing the program to crash, but the math was wrong.
	//No matter what amount was entered by the user, the use of "fee" here only ever printed the $15 dollar fee. To get the right math I had to change
	//the print statement to total, which does the charge + fee math. 
	return 0;
}