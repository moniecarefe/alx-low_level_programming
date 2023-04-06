#include "main.h"

/**
 * find_sqrt - finds the square root of a number
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: the square root if found, -1 otherwise
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}
