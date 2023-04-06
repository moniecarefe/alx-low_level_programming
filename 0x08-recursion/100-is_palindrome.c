#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    len = _strlen_recursion(s);

    if (len <= 1)
        return (1);

    return (_palindrome_helper(s, 0, len - 1));
}

/**
 * _palindrome_helper - recursively checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index to compare
 * @end: the ending index to compare
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return (1);

    if (s[start] != s[end])
        return (0);

    return (_palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);

    return (1 + _strlen_recursion(s + 1));
}
