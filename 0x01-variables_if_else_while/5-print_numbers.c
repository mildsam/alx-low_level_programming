#include <stdio.h>
/**
 * main - Entry point
 * num - contains numbers
 *
 * prints numbers from 0 to 9
 * Return: 0 after success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
