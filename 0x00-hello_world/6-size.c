#include <stdio.h>

/**
 * main - entry point
 * printf: prints the size of the types
 * Return: Always 0 (Success)
 */
int main(void)
{

	/* sizeof evaluetes the size of a variable */
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long));
	printf("size of a long long int: %zu byte(s)\n", sizeof(double));
	printf("size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
