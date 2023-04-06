#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
	int i, result = 1;

	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			result *= i;
		}
		return result;
	}
}
