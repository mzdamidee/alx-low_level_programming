#include "main.h"

/**
 * factorial - returns the factor of a number
 * @n: number to return factor from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		if (n == 0 || n == 1)
		{
			return (1);
		}
		return (n * factorail(n - 1));
}
