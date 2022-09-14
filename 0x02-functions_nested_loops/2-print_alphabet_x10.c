#include "main.h"

/**
 * print_alphabet_x10 - prints out lowercase letters x10
 * print_alphabet
 *_putchar -  used for printing chars
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	char lc;
	int okro;

	okro = 1;
	while (okro <= 10)
	{
		lc = 'a';
		while (lc <= 'z')
		{
			_putchar(lc);
			lc++;
		}
	okro++;
	_putchar('\n');
	}
}
