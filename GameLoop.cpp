#include "GameLoop.h"
#include <iostream>

using namespace std;

void Game::WelcomePlayer()
{
	cout << "Welcome to Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	string name;
	cin >> name;
	m_player.SetName(name);

	cout << endl << "Hello " << m_player.GetName() << endl;
}
// Here I added the additional options to the function GivePlayerOptions added in the PlayerOptions.h file. 
// The user will now have more than just the option to quit. This file's header calls the GameLoop.h file, which
// defines the Game class. The GameLoop.h file's header calls on PlayerOptions.h, which is how this file can 
// utlize the classes defined in two different files.
void Game::GivePlayerOptions() const
{
	cout << "What would you like to do? (Enter a corresponding number)" << endl << endl;
	cout << "1: Quit" << endl << endl;
	cout << "2: PC" << endl << endl;
	cout << "3: PS4" << endl << endl;
	cout << "4: XBOX" << endl << endl;
	cout << "5: Switch" << endl << endl;
	cout << "6: None" << endl << endl; 
}

void Game::GetPlayerInput(string& playerInput) const
{
	cin >> playerInput;
}

PlayerOptions Game::EvaluateInput(string& playerInput) const
{
	PlayerOptions chosenOption = PlayerOptions::None;
// In order to redisplay the user's option I had to add some else if statements to the already
// existing if else statement. I made one for each console, as well as a print statement. 
	if (playerInput.compare("1") == 0)
	{
		cout << "You have chosen to Quit!" << endl << endl;
		chosenOption = PlayerOptions::Quit;
	}
	else if (playerInput.compare("2") == 0) 
	{
		cout << "You have chosen PC!" << endl << endl; 
	}
	else if (playerInput.compare("3") == 0)
	{
		cout << "You have chosen PS4!" << endl << endl;
	}
	else if (playerInput.compare("4") == 0)
	{
		cout << "You have chosen XBOX!" << endl << endl;
	}
	else if (playerInput.compare("5") == 0)
	{
		cout << "You have chosen Switch!" << endl << endl;
	}
	else
	{
		cout << "I do not recognise that option, try again!" << endl << endl;
	}

	return chosenOption;
}

void Game::RunGame()
{
	WelcomePlayer();

	bool shouldEnd = false;
	while (shouldEnd == false)
	{
		GivePlayerOptions();

		string playerInput;
		GetPlayerInput(playerInput);

		shouldEnd = EvaluateInput(playerInput) == PlayerOptions::Quit;
	}
}