#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1, n));
	}
}

/**
 * find_sqrt - Finds the natural square root of a number
 * @n: The number to find the square root of
 * @start: The starting value for the search
 * @end: The ending value for the search
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (mid);
		}
		else
		{
			return (find_sqrt(n, mid + 1, end));
		}
	}
	else
	{
		return (find_sqrt(n, start, mid - 1));
	}
}
