#include "main.h"

/**
 * _puts - prints a string fellowed by a newling to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
