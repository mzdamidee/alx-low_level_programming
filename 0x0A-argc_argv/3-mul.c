#include "main.h"

/**
 * main - mulitplies two numbers
 * @argc: argument count
 * @argv: argument array holding the string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
