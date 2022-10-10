#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * digit_check - This program demonstrates the argument to main
 *
 * @p: checks if the number is valid.
 *
 * Return: 0 if successful, 1 if Error
 */

int digit_check(char *p)
{
	int i = 0;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] < '0' || p[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}


/**
 * main - This program demonstrates the argument to main
 *
 * @argc: Called ARGumentCount, it counts the arguments
 *
 * @argv: is a pointer array which points to each
 * argument passed to the program.
 *
 * Description - to adds positive numbers.
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int valid;

	sum = 0;

	if (argc == 1)
	printf("%d\n", argc - 1);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (digit_check(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			valid = atoi(argv[i]);
			sum = sum  + valid;
		}
		printf("%d\n", sum);
	}
	return (0);
}
