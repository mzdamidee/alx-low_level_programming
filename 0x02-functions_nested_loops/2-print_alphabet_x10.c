#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
