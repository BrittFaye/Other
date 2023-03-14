// Brittany Hanson - The anArrayOfTreasure program offers five treasure chests to the user. The user must pick between 1-5 of the chests
// and discover which one has the token within it. Once the chest with the token is discovered, the user levels up. This program
// functions using two while loops (one to prevent user error), as well as an array, some operators, booleans, pointers, etc.

#include <iostream>
using namespace std;

int main()
{
    int userChoice; // A variable is needed to gather and store user entries.
    bool treasureChest[5] = { false };  // Here is the initialized boolean array with 5 elements, set to false.
    // Outside of both loops is the welcome message as well as the instructions on how to play the game. The user is instructed to 
    // enter a number between 1-5 to start the hunt!
    cout << "Welcome to the treasure hunt! There are five chests, but only one contains the token that will level you up. Choose between chest 1-5!" << endl;
    cin >> userChoice;
    // This while loop is used simply to ensure the user does not get confused and try entering an endless amount of chests that
    // are well outside the 1-5 range. The loop will print the message on the user's screen if they enter anything less than 1,
    // or greater than 5.
    while (userChoice < 1 || userChoice > 5) {
        cout << "Invalid entry. Please enter a number between 1-5." << endl;
        cin >> userChoice;
    }
    // Here is where the array starts to play a part. This while loop continues to check if the token chest (5th) has been opened yet
    // by utilizing a pointer dereference operator. As long as that is false, the loop continues to tell the user to choose another chest,
    // as well as fetching the user's choice. The pointer dereference operator is essential here because it helps the program
    // to determine the location value. By pointing to treasureChest + 4, I am saying to look at location 5, or chest 5. If I were to change
    // it to treasureChest + 3, the 4th chest would contain the token.
    
    while (*(treasureChest + 4) == false) {
            cout << "Sorry, there was no token in that chest. Please choose another chest." << endl;
            cin >> userChoice;
            // Here I used pointers to update the array to true for the chest just found. Without this line of code, 
            // the array would never update. The loop would essentially never end. 
            *(treasureChest + userChoice - 1) = true;
        }
    // Finally the loop ends and the user is informed that they have found the chest with the token inside and they have 
    // leveled up. At this point the program ends.
    cout << "You have found the token and leveled up. Congratulations!" << endl;
    return 0;
}
// References - Sutherland, B. (2014). Learn C++ for Game Development. Berkeley, CA: Apress.
