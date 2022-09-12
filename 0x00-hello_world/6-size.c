#include <stdio.h>

/**
 * main - entry point
 * printf: prints the size of the variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longInt;
	double doubleType;
	float floatType;

	/* sizeof evaluetes the size of a variable */
	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("size of a long long int: %zu byte(s)\n", sizeof(doubleType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));


	return (0);
}
