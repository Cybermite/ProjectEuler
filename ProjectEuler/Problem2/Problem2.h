#ifndef PROBLEM2_H
#define PROBLEM2_H

class Problem2
{
public:
	static double runProblem2();

private:
	static int getSumOfEvenFibonacciNumbers(int below);
	static int getNextFibonacciNumber(int first, int second);
	static void switchNumbers(int* first, int* second);
};

#endif