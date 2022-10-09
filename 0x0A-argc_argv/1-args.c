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
 * Description - prints the number of arguments
 * passed into it
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
		printf("%d\n", argc - 1);
			return (0);
}
