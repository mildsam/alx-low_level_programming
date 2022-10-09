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
 * Description - the program prints all arguments it receives.
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
