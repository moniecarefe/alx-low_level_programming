#include "main.h"

/**
 * str_len - Returns the length of a string recursively
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
    if (*s == '\0')
        return (0);
    return (str_len(s + 1) + 1);
}

/**
 * _is_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @i: The index of the first character in the string
 * @j: The index of the last character in the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome(char *s, int i, int j)
{
    if (i >= j)
        return (1);
    if (s[i] != s[j])
        return (0);
    return (_is_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    len = str_len(s);
    if (len == 0 || len == 1)
        return (1);
    return (_is_palindrome(s, 0, len - 1));
}
