#include <stdio.h>

/**
 * main - entry point
 * lc - the  alphabet
 * while: condition for displaying lc
 * Return: 0 After succes
 */

int main(void)
{
	char lc;

	lc = 'a';
	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
