#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program demonstrates the argument to main
 * arguments to main provide a useful opportunity to
 * give parameters to programs.
 *
 * @argc: Called ARGumentCount, it counts the arguments
 * supplied to the program
 *
 * @argv: is a pointer array which points to each
 * argument passed to the program.
 *
 * Description - the multiplies two numbers.
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else if (argc <= 2 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
