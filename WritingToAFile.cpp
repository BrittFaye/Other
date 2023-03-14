// Brittany Hanson - This program's purpose is to create a previously non existant file. The file will record the number of rounds and
// players in the game, as well as their scores.
// References:
// Codesdope.com. C++ : Handling files, reading and writing to file. Retrieved February 13, 2021, from https://www.codesdope.com/cpp-file-io/
// C++ files. Retrieved February 13, 2021, from https://www.w3schools.com/cpp/cpp_files.asp#:~:text=To%20create%20a%20file%2C%20use,insertion%20operator%20(%20%3C%3C%20).
// Sutherland, B. (2014). Learn C++ for Game Development. Berkeley, CA: Apress.

#include <iostream>
#include <fstream>
// Whenever opening or creating a file, fstream must be included here.
using namespace std;

int main()
{
// I added all of these variables because they are needed to keep track of the players, the score, as well as to iterate the loops.
    int numberOfPlayers;
    int numberOfRounds;
    int playerScore, a, b;
    string playerName;

// Here I engage the user and ask for the number of players and rounds.
    cout << "SCOREBOARD!\n" << endl;
//cout << endl; I commented out this line because I was just playing around with spaces in this program. 
// I had this end line statement originally but changed it to /n cause it took up less space.
    cout << "Number of players: ";
    cin >> numberOfPlayers;
    cout << "Number of rounds: ";
    cin >> numberOfRounds; 

// In order to write to the file I am creating, I must first open it with the ofstream object. I named my ofstream object myFile,
// and the file I named Scoreboard. Since the file will be a text file, I labeled it as such. I then opened it with .open.
// Because I chose ofstream, I do not have to include ios::out because ofstream automatically includes it.
    ofstream myFile;
    myFile.open("Scoreboard.txt");

// I made an if else statement for peace of mind. This will ensure that I am aware if the file I created opened successfully. 
    if (!myFile.is_open()) {
        cout << "File did not open." << endl;
    }
    else {
// This loop is created to iterate through the rounds. Variable a will iterate through the loop and count each round. Because it is 
// included in the print statement, the user will see which count it is on. The myFile object is used to insert the round into the file
// directly after the print statement.
        for (int a = 1; a <= numberOfRounds; a++) {
            cout << endl; 
            cout << "Round " << a << "\n" << endl;
            myFile << "Round " << a << endl;
// This next loop is intended to get user input of the players name and score, as well as to iterate through each round, which is
// the reason it is nested. Once again the myFile object is used to insert the recorded names and scores into the scoreboard file.
            for (int b = 1; b <= numberOfPlayers; b++) {
                cout << "Enter name: ";
                cin >> playerName;
                cout << "Enter score: ";
                cin >> playerScore;
                myFile << playerName << " scored a " << playerScore << "." << endl;
            }
        }
// Here I closed the file because that is the rule of thumb when it comes to files and coding. 
        myFile.close();
        cout << "The player scores have been recorded to the Scoreboard file!" << endl;
    }
    return 0;
}
