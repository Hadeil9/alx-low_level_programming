#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Description: This function checks if the input string is a palindrome.
 * A palindrome is defined as a string that reads the same forward and backward.
 * The function uses a recursive approach to check if the first and last characters
 * of the string match. If they match, it recursively checks the remaining substring
 * until it reaches the middle of the string. If all characters match, the string is
 * a palindrome and the function returns 1. If any characters do not match, the string
 * is not a palindrome and the function returns 0.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 *
 * Example:
 * If s is "level", the function will return 1 (a palindrome).
 * If s is "hello", the function will return 0 (not a palindrome).
 * If s is an empty string, the function will return 1 (an empty string is a palindrome).
 */
int is_palindrome(char *s)
{
    int len = strlen(s);
    return check_palindrome(s, 0, len - 1);
}

/**
 * check_palindrome - Recursive helper function to check palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start + 1, end - 1);
}
