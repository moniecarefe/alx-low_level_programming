#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return (0);
    else
        return (1 + _strlen(s + 1));
}

/**
 * _palindrome_helper - checks if a string is a palindrome
 * @s: the string to check
 * @i: the current index
 * @j: the current index from the end of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _palindrome_helper(char *s, int i, int j)
{
    if (i >= j)
        return (1);
    else if (s[i] != s[j])
        return (0);
    else
        return (_palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);
    if (len <= 1)
        return (1);
    else
        return (_palindrome_helper(s, 0, len - 1));
}
