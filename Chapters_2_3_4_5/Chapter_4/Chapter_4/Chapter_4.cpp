// Chapter_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>

using namespace std;

void Problem1()
{
	int age1, age2;
	age1 = age2 = 1;

	cout << "Enter First Age: ";
	cin >> age1;
	cout << "Enter Second Age: ";
	cin >> age2;

	if (age1 > 100 && age2 > 100)
	{
		cout << "Both old. \n";
	}

	if (age1 > age2)
	{
		cout << "Person 1 older than Person 2.";
	}
	else if (age2 > age1)
	{
		cout << "Person 2 older than Person 1.";
	}
	else
	{
		cout << "Person 1 same age as Person 2.";
	}
}

void Problem2()
{
	int password1 = 12345;
	int password2 = 54321;
	int passwordInput = -1;

	cout << "Please enter numeric password: ";
	cin >> passwordInput;

	if (password1 == passwordInput || password2 == passwordInput)
	{
		cout << "Correct password entered.";
	}
	else
	{
		cout << "Incorrect password entered.";
	}
}

void Problem3()
{
	double num1, num2;
	num1 = num2 = 1.0;

	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;

	string functionSign;
	cout << "Enter arithmetic function: ";
	cin >> functionSign;

	if (functionSign == "+")
	{
		cout << "Result: " << num1 + num2;
	}
	else if (functionSign == "-")
	{
		cout << "Result: " << num1 - num2;
	}
	else if (functionSign == "/")
	{
		cout << "Result: " << num1 / num2;
	}
	else if (functionSign == "*")
	{
		cout << "Result: " << num1 * num2;
	}
	else
	{
		cout << "Incorrect sign input.";
	}
}

int main()
{
	Problem3();
	cin.ignore();
	cin.get();
    return 0;
}

