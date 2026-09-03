// September3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hisAge = 19;

    string hisName;
    string favoriteFood;
    string firstPetName;

    cout << "What is your name?\n";
    cin >> hisName;

    // Prompt the user for their age
    cout << "What is your age, " << hisName << "?\n";
    cin >> hisAge;

    // Clear the leftover Enter key
    cin.ignore();

    // Ask for their favorite food
    cout << "What is your favorite food?\n";
    getline(cin, favoriteFood);

    // Ask for their first pet's name
    cout << "What was the name of your first pet?\n";
    getline(cin, firstPetName);

    // Display the information
    cout << "\n" << hisName << " is " << hisAge << " years old.\n";
    cout << hisName << "'s favorite food is " << favoriteFood << ".\n";
    cout << hisName << "'s first pet's name was " << firstPetName << ".\n";

    return 0;

}
