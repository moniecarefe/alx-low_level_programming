/**
 * _pow_recursion - Computes the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1;
    if (y == 0)
        return 1;
    if (y == 1)
        return x;

    int res = _pow_recursion(x, y / 2);

    if (y % 2 == 0)
        return res * res;
    else
        return x * res * res;
}
