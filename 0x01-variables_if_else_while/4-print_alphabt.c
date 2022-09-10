#include <stdio.h>
/**
 * main -entry point
 * lett - consists of letters
 *
 * prints out the letters excluding q & e
 * Return: 0 after success
 */
int main(void)
{
	char lett;

	lett = 'a';
	while (lett <= 'z')
	{
		if (lett != 'q' && lett != 'e')
		putchar(lett);
		lett++;
	}
	putchar('\n');

	return (0);
}
