#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the character to print
 *
 * Return: on success 1,
 * on write, 1 is returned, and error is set appopriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
