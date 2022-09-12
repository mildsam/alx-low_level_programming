#include <stdio.h>

/**
 * main - Entry point
 *rev - the letters
 *putchar: displays the letters in reverse
 *Return: Always 0 (Success)
 */
int main(void)
{
	char rev;

	for (rev = "z"; rev > "a"; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
