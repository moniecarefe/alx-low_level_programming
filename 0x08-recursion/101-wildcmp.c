/**
 * wildcmp - compare two strings, considering that s2 may contain wildcard *
 * @s1: the first string
 * @s2: the second string, may contain wildcard *
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '\0')
            return (1);
        else if (*s1 == '\0')
            return (0);
        else
            return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
    }
    else if (*s1 == *s2)
    {
        if (*s1 == '\0')
            return (1);
        else
            return (wildcmp(s1 + 1, s2 + 1));
    }
    else
        return (0);
}
