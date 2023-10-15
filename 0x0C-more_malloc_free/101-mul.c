#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_integer - Function to check if a string
 * represents a positive integer
 * @str: string
 *
 * Return: Positive integer
 */

int is_positive_integer(const char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply_numbers - Function to multiply two numbers
 * @num1: first int
 * @num2: second int
 *
 * Return: multiption
 */

int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Check if the correct number of arguments is provided
 * @argv: pointer
 * @argc: int
 *
 * Return: valid positive integers
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply_numbers(num1, num2);

	printf("%d\n", result);

	return (0);
}
