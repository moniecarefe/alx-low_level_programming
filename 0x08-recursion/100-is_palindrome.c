#include "main.h"

/**
 * str_len - returns the length of a string
 * @str: the string to get the length of
 *
 * Return: the length of the string
 */
int str_len(char *str)
{
    int len = 0;

    while (*(str++))
        len++;

    return (len);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = str_len(s);
    char *start = s;
    char *end = s + len - 1;

    while (start < end)
    {
        if (*start != *end)
            return (0);

        start++;
        end--;
    }

    return (1);
}
