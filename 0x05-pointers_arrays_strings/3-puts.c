#include "main.h"

/**
 * _puts - prints the length of a string
 * @str: pointer variable
 *
 * Return: Always 0,
 */
void _puts(char *str)
{
	int counter = 0;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		_putchar(*(str + counter));
	}
	_putchar('\n');
}
