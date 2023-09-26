#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment
 * of s that consist only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
