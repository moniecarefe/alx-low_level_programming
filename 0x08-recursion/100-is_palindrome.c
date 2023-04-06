#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check the length
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;

    return (len);
}

/**
 * _palindrome_helper - checks if a string is palindrome
 * @s: string to check
 * @i: left index
 * @j: right index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _palindrome_helper(char *s, int i, int j)
{
    if (i >= j)
        return (1);

    if (s[i] != s[j])
        return (0);

    return (_palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);

    if (len == 0 || len == 1)
        return (1);

    return (_palindrome_helper(s, 0, len - 1));
}
