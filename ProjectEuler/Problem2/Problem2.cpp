#include "Problem2.h"
#include <iostream>
#include <time.h>

double Problem2::runProblem2()
{
	int below = 4000000;
	std::cout << "**********\nProblem 2\n";

	clock_t startTime = clock();
	int sumOfEvenFibonacciNumbers = Problem2::getSumOfEvenFibonacciNumbers(below);
	clock_t endTime = clock();
	double ticksTaken = endTime - startTime;

	std::cout << "\nSum of the even fibonacci numbers below " << below << " is: " 
		      << sumOfEvenFibonacciNumbers << "\n\n";

	return ticksTaken;
}

int Problem2::getNextFibonacciNumber(int first, int second)
{
	return first + second;
}

int Problem2::getSumOfEvenFibonacciNumbers(int below)
{
	int sum = 2;
	int firstVal = 1;
	int secondVal = 2;

	while(true)
	{
		//Fibonacci goes Odd, Odd, Even, Odd, Odd, Even... etc.. (excluding the first two numbers)
		firstVal = getNextFibonacciNumber(firstVal, secondVal);
		secondVal = getNextFibonacciNumber(secondVal, firstVal);
		firstVal = getNextFibonacciNumber(firstVal, secondVal);
		if(firstVal >= below)
		{
			break;
		}
		sum += firstVal;
		switchNumbers(&firstVal, &secondVal);
	}

	return sum;
}

void Problem2::switchNumbers(int* first, int* second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}