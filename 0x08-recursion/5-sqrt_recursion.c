#include "main.h"

int sqrt_recursion_main(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: the resulting sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion_main(n, 0));
}

/**
 * sqrt_recursion_main - recurses to find the natural
 * square root of a number
 * @n: number to calculate square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_recursion_main(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion_main(n, i + 1));
}
