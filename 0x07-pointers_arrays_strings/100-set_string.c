#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to a pointer to a char.
 * @to: The string to set the pointer to.
 *
 * Description: This function takes a pointer to a pointer
 * to a char (double pointer)
 * and sets its value to the provided string.
 * It effectively changes what the pointer
 * points to, updating its value to point to a new string.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
