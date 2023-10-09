#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenater two string
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: number of bytes
 *
 * Return: pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*check if the string passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == Null)
		s2 = "";
	/*computer length*/
	for (s1_length = 0; s1[s1_length] != '0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	/*memory reservation-for case 1&2*/
	str = malloc(s)_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str.*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string*/
	for (j = 0; j < n; j++)
	{
		str[i] = 52[j];
		li++;
	}
	str[i] = '\0';
	return (str);
}
