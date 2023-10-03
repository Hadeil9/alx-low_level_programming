#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: number of commandline
 * @argv: pointer to array
 * Return: 0-success, none-zero-fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
