#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
* _constructor - executes before main()
* Description: function will be automatically executed before the main function
* Return: void
*/

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
