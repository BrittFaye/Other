// Brittany Hanson - I found most of these bugs by simply looking for the red underline. Each and every one I was able to solve
// before I ever ran the program. I did miss one (the switch statement bug) because it wasn't as obvious. I found it by clicking on the 
// error x, and reading the problem. I saw the bug was on line 37 (at the time because this comment has changed the order) and the solution 
// was to add a ;. At first I tried it but immediately realized that was not the solution. I read the code more closely and realized
// it was the switch statment case's name. The : was not the problem, but rather the missing number. When I see underlined errors in
// any program, the first things I think about are the basics. In this particular assignment, all of the bugs were very simple. If
// there is a variable that is not defined, check the variables at the start of the program. Do they match? If not that is where
// the error lies! The same steps can be taken with missing or incorrect syntax. If there is a cout statement with a string inside, 
// it then follows that there need to be quotes wrapped around the text. Understanding and practicing the basics is essential. 


//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std; // 1) This program would not run without this line, or by putting std::cout, std::endl for each of those instances
// (and more) below. The computer does not understand what cout, endl, etc does unless the namespace is defined.

void Tower(int, char, char, char);

int main()
{
	int choice;
	cout << "1. Solve the Tower of Hanoi" << endl;
	cout << "2. View Your Profile" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choice : " << endl;
	cin >> choice;
	switch (choice)  // 2) choice was incorrectly typed with a capital letter here, meaning it was not defined.
	{
	case 1:
		system("cls");
		int numDiscs;

		cout << "**Tower of Hanoi**\n";
		cout << "Enter the number of discs : "; // 3) This line was throwing and error because there were no "".
		cin >> numDiscs;
		cout << "\n\n";
		Tower(numDiscs, 'A', 'B', 'C');
		break;
// 4) Below case was incorrectly numbered within the switch statement and was written as case:. The computer could not execute 
// and follow along because the case value was completely missing.
	case 2:  
		cout << "Username:\t\tPlayer 1" << endl;
		cout << "Gamertag:\t\tImTheBest" << endl;
		cout << "No. Hours Played:\t173" << endl;
		break;
	case 3:
		cout << "Now Exiting." << endl;
		break;
	default:
		cout << "You did not choose anything...so exit this program." << endl;
	}

	return 0;
}


void Tower(int numDiscs, char from, char aux, char to) {
	if (numDiscs == 1) {
		cout << "\tMove disc 1 from " << from << " to " << to << "\n";
		return;
	}
	else {
		Tower(numDiscs - 1, from, to, aux); // 5) Another naming mistake here, this time the function was incorrectly called with a lower case.
		cout << "\tMove disc " << numDiscs << " from " << from << " to " << to << "\n";
		Tower(numDiscs - 1, aux, from, to);
	}
}
