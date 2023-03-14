// Brittany Hanson - This is a TicTacToe program that is intended to allow the user to play TicTacToe. The program prints the board tile
// so the user can visualize the game. Each spot on the board is held with a number. The user plays both player 1 and player 2. When 
// the game starts, player 1 is asked to choose a number (spot on the board). Next is player 2. Player 1 is assigned with X, player
// 2 is assigned with O. The user continues to choose spots on the board for player 1 and 2 until X or O marks three tiles in a row or there is a draw.
// This program acheives this game by utilizing functions, loops, statements, and more. It is very complex for such a simple game.

//#include "stdafx.h"
#include <iostream>
using namespace std;

char boardTile[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

// There was only one missing declaration.
bool checkValidMove(int);
void drawBoard();
int checkForWinner();
// I declared checkForWinner here with int because according to author Bruce Sutherland, void functions do not return values. 
// checkForWinner must return an int value so it is not declared as void.

int main()
{
	int player = 1, i, choice;
	char mark;
	bool isMoveValid = false;
	do
	{
		// The function that draws the board is called drawBoard. Functions only work if they are called on.
		drawBoard();
		player = (player % 2) ? 1 : 2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark = (player == 1) ? 'X' : 'O';

		// Storing the result of the checkValidMove function in the isMoveValid variable. 
		// Saving the return value using the choice variable.
		
		isMoveValid = checkValidMove(choice);
		if (isMoveValid) {
			boardTile[choice] = mark;
		}
		else {
			cout << "Invalid move ";
			player--;
			cin.ignore();
			cin.get();
		}

		i = checkForWinner();
		player++;
	} while (i == -1);

	drawBoard();
	if (i == 1)
		cout << "==>Player " << --player << " wins!";
	else
		cout << "==>Game draw";
	cin.ignore();
	cin.get();
	return 0;
}

// Check the board for a winner.
// Returning a -1 is keep playing
// Returning a 0 is a draw (or cat wins)
// Returning a 1 shows a winner
int checkForWinner()
{
	// This first if statement checks the rows of the board. If a row matches, there is a winner. According to the rules 
	// above, that would be return 1 so that a winner is declared. The second block of else if checks to see if the rows
	// do not match their given placeholder numbers. If they do not but they also do not match the first blocks rows, there is a draw.
	// According to the rules that is a return 0. The final else block loops until either the first or second is reached.
	// That means the final else gets a return -1.
	if ((boardTile[1] == boardTile[2] && boardTile[2] == boardTile[3])
		|| (boardTile[4] == boardTile[5] && boardTile[5] == boardTile[6])
		|| (boardTile[7] == boardTile[8] && boardTile[8] == boardTile[9])
		|| (boardTile[1] == boardTile[4] && boardTile[4] == boardTile[7])
		|| (boardTile[2] == boardTile[5] && boardTile[5] == boardTile[8])
		|| (boardTile[3] == boardTile[6] && boardTile[6] == boardTile[9])
		|| (boardTile[1] == boardTile[5] && boardTile[5] == boardTile[9])
		|| (boardTile[3] == boardTile[5] && boardTile[5] == boardTile[7]))
	{
		return 1;
	}
	else if (boardTile[1] != '1' && boardTile[2] != '2' && boardTile[3] != '3'
		&& boardTile[4] != '4' && boardTile[5] != '5' && boardTile[6] != '6'
		&& boardTile[7] != '7' && boardTile[8] != '8' && boardTile[9] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

//  Draw the board with the player marks
void drawBoard()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 has 'X'  -  Player 2 has 'O'" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << boardTile[1] << "  |  " << boardTile[2] << "  |  " << boardTile[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << boardTile[4] << "  |  " << boardTile[5] << "  |  " << boardTile[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << boardTile[7] << "  |  " << boardTile[8] << "  |  " << boardTile[9] << endl;
	cout << "     |     |     " << endl << endl;
}

// Using the checkValidMove function, the user's choice is evaluated here to be true or false (taken or not taken).
bool checkValidMove(int choice)
{
	bool isValid = false;
	char aChar = '0' + choice;
	if (choice > 0 && choice <= 9) {
		if (boardTile[choice] == aChar) {
			isValid = true;
		}
	}

	return isValid;
}
// References - Sutherland, B. (2014). Learn C++ for Game Development. Berkeley, CA: Apress.
