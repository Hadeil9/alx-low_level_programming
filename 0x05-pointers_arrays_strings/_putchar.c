#include <unistd.h>

/**
 * _putchar - writes the character 0 to stdout
 * @c: the character to print
 *
 * Return:On success 1
 * On error, -1 is returned, and error is set appopristely
 */

int _puychar(char c)
{
	return (write(1, &c, 1));
}
