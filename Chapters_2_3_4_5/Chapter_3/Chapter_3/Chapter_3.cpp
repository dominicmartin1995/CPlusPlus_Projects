#include "stdafx.h"
#include "iostream"
#include <string>

using namespace std;

void Problem1()
{
	cout << "What is your name? \n";
	string myName = "Temp Name";
	cin >> myName;
	cout << "Your name is " << myName;
}

void Problem2()
{
	int num1, num2;
	num1 = num2 = 1;
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Number 1 + Number 2 = " << num1 + num2;
}

void Problem3()
{
	double double1, double2;
	double1 = double2 = 1.0;
	cout << "Number 1: ";
	cin >> double1;
	cout << "Number 2: ";
	cin >> double2;
	cout << "Number 1 / Number 2 = " << double1/double2;
}

int main()
{
	Problem3();
	cin.ignore();
	cin.get();

	return 0;
}