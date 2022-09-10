#include <stdio.h>

/**
 * main - entry point
 * lc - lowercase letter
 * uc - uppercase letter
 *while - condition for the output
 *
 * Return: 0 After success
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'a')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar("\n");
	return (0);
}
