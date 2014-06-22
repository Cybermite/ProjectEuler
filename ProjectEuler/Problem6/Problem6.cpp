#include "Problem6.h"
#include <time.h>
#include <iostream>

double Problem6::runProblem6()
{
	int upper = 100;
	std::cout << "**********\nProblem 6\n";
	clock_t startTime = clock();

	int sumOfSquares = sumOfiSquared(upper);
	int sumFromOneToUpper = sumOfi(upper);
	int squareOfSum = sumFromOneToUpper*sumFromOneToUpper;
	int difference = squareOfSum - sumOfSquares;

	clock_t endTime = clock();
	double ticksTaken = endTime - startTime;

	std::cout << "\nDifference between the sum of the squares of the first " << upper << " natural numbers and the square of the sum is: " 
		      << difference << "\n\n";

	return ticksTaken;
}

int Problem6::sumOfi(int upper)
{
	return upper*(upper+1)/2;
}

int Problem6::sumOfiSquared(int upper)
{
	return upper*(upper + 1)*(2*upper + 1)/6;
}