// Chapter_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>

using namespace std;

void Problem1()
{
	int count = 99;
	while (count != 0)
	{
		cout << count << " bottles of beer on the wall. \n";
		count--;
	}
}

void Problem2()
{
	bool bIncorrectOption = true;
	do
	{
		int input = -1;
		cout << "------------------------------------------------------------------ \n";
		cout << "1. Option 1 \n";
		cout << "2. Option 2 \n";
		cout << "3. Option 3 \n";
		cout << "4. Option 4 \n";
		cout << "------------------------------------------------------------------ \n";
		cout << "Select Option: ";
		cin >> input;

		if (input > 0 && input < 5)
		{
			bIncorrectOption = false;
			cout << "Option Chosen: " << input << " \n";
		}
	} while (bIncorrectOption);
}

void Problem3()
{
	int input = -1;
	int sum = 0;

	while (input != 0)
	{
		cout << "Sum: " << sum << "\n";
		cout << "Input: ";
		cin >> input;
		sum += input;
	}
}

void Problem4()
{
	int passwordAttemptsNum = 3;
	bool bCorrectCombination = false;

	string correctUsername = "username";
	string correctPassword = "password";

	while (passwordAttemptsNum > 0)
	{
		string usernameAttempt;
		cout << "Username: ";
		cin >> usernameAttempt;

		string passwordAttempt;
		cout << "Password: ";
		cin >> passwordAttempt;

		if (passwordAttempt == correctPassword && usernameAttempt == correctUsername)
		{
			passwordAttemptsNum = 0;
			bCorrectCombination = true;
			cout << "Correct Combination. \n";
		}
		else
		{
			cout << "Wrong Combination. \n";
		}

		passwordAttemptsNum--;
	}

	if (bCorrectCombination)
	{
		cout << "Correct combination given.";
	}
	else
	{
		cout << "Maximum number of attempts reached.";
	}
}

void Problem6()
{
	for (int i = 1; i <= 20; i++)
	{
		cout << "Num: " << i << ", Square: " << i * i << " \n";
	}
}

void Problem7()
{
	int optionOneCount = 0;
	int optionTwoCount = 0;
	int optionThreeCount = 0;
	int userInput = -1;

	while (userInput != 0)
	{
		cout << "------------------------------------------------------------------ \n";
		cout << "Is this the poll question ? \n";
		cout << "1| Yes \n";
		cout << "2| No \n";
		cout << "3| Don't know \n";
		cout << "Input: ";
		cin >> userInput;
		cout << "------------------------------------------------------------------ \n";

		if (userInput == 1)
		{
			optionOneCount++;
		}
		else if (userInput == 2)
		{
			optionTwoCount++;
		}
		else if (userInput == 3)
		{
			optionThreeCount++;
		}
	}
	
	cout << "Results: \n";
	cout << "1| Yes - " << optionOneCount << " \n";
	cout << "2| No - " << optionTwoCount << " \n";
	cout << "3| Don't know - " << optionThreeCount << " \n";
}

int main()
{
	Problem7();
	cin.ignore();
	cin.get();
    return 0;
}

