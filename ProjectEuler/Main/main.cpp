#include "Problem1.h"
#include "Problem2.h"
#include <iostream>
#include <time.h>

void printTime(double ticksTaken)
{
	std::cout << "Total Time: " << ticksTaken/(double) CLOCKS_PER_SEC << "\n**********\n\n";
}

int main()
{
	printTime(Problem1::runProblem1());
	printTime(Problem2::runProblem2());
}