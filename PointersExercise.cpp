// PointersExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Code by Johnny Northrup
// Date:  20220725

#include <iostream>
using namespace std;

// Challenge:  Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'.
// Then create two integer pointers named ptrA and ptrB.  Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.
//
// Take an input variable and display the same value by pointer.

int main(){
	//variables
	int a, b, c;
	//pointers
	int* ptrA = &a;
	int* ptrB = &b;
	int* ptrC = &c;

	//Part 1:
	//take user input and store in variables
	cout << "\nEnter two numbers for a and b:" << endl;
	cin >> a >> b;

	//show user input by displaying pointer values
	cout << "The value of ptrA is: " << *ptrA << " and ptrB: " << *ptrB << endl;
	//show user address locations
	cout << "The address of ptrA is: " << ptrA << " and ptrB: " << ptrB << endl;

	//Part 2:
	//Take an input variable and display the same value by pointer:
	cout << "Enter another number: " << endl;
	cin >> c;
	//display answer
	cout << "Pointer value is: " << *ptrC << " stored at address: " << ptrC << endl;

	return 0;
}
