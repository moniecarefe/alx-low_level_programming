#include "main.h"

/**
 * wildcmp - compares two strings to see if they match
 *
 * @s1: the first string to compare
 * @s2: the second string to compare; can contain wildcard '*'
 *
 * Return: 1 if the strings match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
        {
            return (wildcmp(s1, s2 + 1));
        }
        else if (wildcmp(s1, s2 + 1))
        {
            return (1);
        }
        else
        {
            return (wildcmp(s1 + 1, s2));
        }
    }

    if (*s1 == '\0' && *s2 == '\0')
    {
        return (1);
    }
    else if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    return (0);
}
