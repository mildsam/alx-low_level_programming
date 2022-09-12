#include <stdio.h>

/**
 * main - entry point
 * putchar: displays the hexadecimals
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
