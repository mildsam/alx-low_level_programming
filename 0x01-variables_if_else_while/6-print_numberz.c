#include <stdio.h>
/**
 * main - Entry point
 * n: contains number
 *
 * print num with putchar
 * Return: 0 after success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
