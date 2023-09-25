#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: memory size
 * @src: source
 * @n: length
 *
 * Return: the point to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
