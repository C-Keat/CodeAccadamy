// EvenAndOddCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Write a program to find the sum of even numbers and the product of odd numbers in a vector.

#include <iostream>
#include <vector>
#include <string>

int main()
{
	//declare the vector - initialise the vector
	std::vector<int> numSelection = { 2,4,3,6,1,9 };
	
	//create int oddTotal, evenTotal
	int oddTotal = 0, evenTotal = 0;
	
	//loop though the vector 
	for (int i = 0; i < numSelection.size(); i++)
	{
		
		if (numSelection[i] % 2 == 0) {//if odd add that index position to the oddTotal
			//the num is even.
			evenTotal += numSelection[i];
		}
		else {//if even add that index position to the evenTotal
			//the num is odd
			oddTotal += numSelection[i];
		}
	}

	std::cout << "The ODD total is: " << oddTotal << "\nThe Even total is: " << evenTotal;

	//print the odd and even totals;

	return 0;
}

