#include "Problem1.h"
#include <iostream>
#include <time.h>

double Problem1::runProblem1()
{
	clock_t startTime = clock();
	int below = 1000;
	int multiplesOfFive = Problem1::sumOfMultiplesOf(5, below);
	int multiplesOfThree = Problem1::sumOfMultiplesOf(3, below);
	int multiplesOfFifteen = Problem1::sumOfMultiplesOf(15, below);

	int multiplesOfFiveOrThree = multiplesOfFive + multiplesOfThree - multiplesOfFifteen;
	clock_t endTime = clock();
	double ticksTaken = endTime - startTime;

	std::cout << "**********\nProblem 1\n";
	std::cout << "\nSum of the multiples of Five and Three below " << below << " is: " 
		      << multiplesOfFiveOrThree << "\n\n";

	return ticksTaken;
}

int Problem1::sumOfMultiplesOf(int num, int below) 
{
	int upper = (below - 1)/num;
	int sum = ((num)*(upper)*(upper+1))/2;
	return sum;
}