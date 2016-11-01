// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: Lab10.cpp
// Contents: Lab #10 Programming Assignment
// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Function designed to find how many character are the letter a within a string using recursion.
// It takes the users input for a string, and has an initial aCounter of 0.
int aStrCount(string &inputStr, int aCounter)
{

	if (inputStr.size() == 0)	// Base case.
	{
		return aCounter;	// Returning how many letter a's total.
	}
	
	if (inputStr.back() == 'a' || inputStr.back() == 'A')	// If a or A then that will be counted, and the string will move onto the next character.
	{
		aCounter++;
		inputStr.pop_back();
	}
	else	// If it is not, then it will not take the count, and will move onto the next character.
	{
		aCounter;
		inputStr.pop_back();
	}
	
	return aStrCount(inputStr, aCounter);	// This is the recursion, which returns the function until the base case is met.
}

int main()
{
	cout << "Enter a string for to find how many a's are in it." << endl << endl;	// Prompt for input.

	string userInput;
	getline(cin, userInput);	// Setting the input into the string, userInput.

	int aCount = aStrCount(userInput, 0);	// Setting the int aCount to the result of the aStrCount function.
	cout << endl << "The amount of a's in that input is: " << aCount << endl << endl;	// Results.

	system("PAUSE");	// Pause the console.

    return 0;
}

