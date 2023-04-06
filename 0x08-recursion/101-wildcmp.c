#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * @s1: first string
 * @s2: second string that can contain the wildcard character *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* end of strings */
		return (1);
	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0') /* s2 ends with * */
			return (1);
		if (*s1 == '\0' && *(s2 + 1) == '*') /* s1 and s2 have consecutive * */
			return (wildcmp(s1, s2 + 1));
		if (*s1 != '\0' && *(s2 + 1) == '\0') /* s2 ends after * */
			return (1);
		if (*s1 != '\0' && *(s2 + 1) == '*') /* s2 has multiple * */
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		return (wildcmp(s1 + 1, s2)); /* s2 has a single * */
	}
	if (*s1 != *s2) /* regular character mismatch */
		return (0);
	return (wildcmp(s1 + 1, s2 + 1)); /* both characters match */
}
