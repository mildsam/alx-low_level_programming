#include <stdio.h>

/**
 * main - Entry point
 * chrl: contains alphabets in lowercase
 * chru: contains alphabest in uppercase
 *
 * prints out alphabets in lowercases and uppercasess
 * Return: 0 after success
 */

int main(void)
{
	char chrl = 'a';
	char chru = 'A';

	while (chrl <= 'z')
	{
		putchar(chrl);
		chrl++;
	}
	while (chru <= 'Z')
	{
		putchar(chru);
		chru++;
	}
	putchar('\n');

	return (0);
}
