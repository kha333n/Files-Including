// Files Including.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//The code below is in single file now we write it into multiple files.
//
//



#include "divide.cpp"
#include <iostream>
using namespace std;

//Here I have included divide.cpp file which is also linked with other.


//As we have written add function already we can use preprocessor directive to
// avoid writing same code by mistake.

#ifndef ADD    //ifndef means if not defined.  if add.cpp file is missing or not included only then this code will run.
int add(int x, int y)
{
	return (x + y);
}
#endif   //Ending the condition.

#ifndef SUBTRACT
int subtract(int x, int y)
{
	return (x - y);
}
#endif

#ifndef MULTIPLY
int multiply(int x, int y)
{
	return (x * y);
}
#endif

#ifndef DIVIDE
int divide(int x, int y)
{
	if (y == 0)
	{
		return 0;
	}
	else
	{
		return (x / y);
	}
}
#endif

//These preprocessor directives are used to prevent conflict between code.

int main()
{
    int number1, number2;
	cout << "Enter number 1: " << endl;
	cin >> number1;
	cout << "Enter Number 2: " << endl;
	cin >> number2;

#ifdef ADD   //ifdef means if defined.  The code between ifdef block will only work when ADD is defined.
	cout << "Addition: " << add(number1,number2) << endl;
#endif   //end of ifdef
	cout << "Subtraction: " << subtract(number1,number2) << endl;
	cout << "Multiplication: " << multiply(number1,number2) << endl;
	cout << "Division: " << divide(number1,number2) << endl;
}