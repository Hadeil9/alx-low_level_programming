#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenater two strings
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: number of bytes
 *
 * Return:pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*Check if s1 or s2 are NULL, treat them as empty strings*/
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	/*Calculate the lengths of the input strings*/
	size_t length_s1 = strlen(s1);
	size_t length_s2 = strlen(s2);

	/*Use the entire s2 string if n is greater or equal to its length*/
	if (n >= length_s2)
	{
	n = length_s2;
	}

	/*Allocate memory for the concatenated string*/
	char *concatenated = (char *)malloc((length_s1 + n + 1) * sizeof(char));

	/*Check if memory allocation was successful*/
	if (concatenated == NULL)
	{
	return (NULL); /*Return NULL on failure*/
	}

	/*Copy the contents of s1 to the concatenated string*/
	strcpy(concatenated, s1);

    /*Copy the first n bytes of s2 to the concatenated string*/
	strncat(concatenated, s2, n);

	return (concatenated);
}
