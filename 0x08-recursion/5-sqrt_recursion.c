/**
 * sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @lo: the lower bound of the binary search
 * @hi: the upper bound of the binary search
 *
 * Return: the square root of n if it's a perfect square, or -1 otherwise
 */
int sqrt_helper(int n, int lo, int hi)
{
    int mid, sq;

    if (lo > hi)
        return (-1);

    mid = (lo + hi) / 2;
    sq = mid * mid;

    if (sq == n)
        return (mid);
    else if (sq < n)
        return (sqrt_helper(n, mid + 1, hi));
    else
        return (sqrt_helper(n, lo, mid - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n if it's a perfect square, or -1 otherwise
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (sqrt_helper(n, 0, n));
}
