#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = (1 + _strlen_recursion(s + 1));
	}
	return (count);
}
