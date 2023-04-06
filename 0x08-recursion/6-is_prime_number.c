#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n < 2 || (n != 2 && n % 2 == 0))
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 2));
	}
}

int is_prime_number(int n)
{
	return (is_prime_helper(n, 3));
}
