#include "main.h"

/**
 * print_alphabet - prints out lowercase letters
 * print_alphabet
 *_putchar -  used for printing chars
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char lc;

	lc = 'a';
	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;
	}
	_putchar('\n');
}
