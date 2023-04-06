#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
    static int memo[13] = {0};
    int result;

    if (n < 0)
        return (-1);

    if (n == 0 || n == 1)
        return (1);

    if (memo[n] != 0)
        return (memo[n]);

    result = n * factorial(n - 1);
    memo[n] = result;
    return (result);
}
