#include "main.h"

/**
 * _puts_recursion -  prints the reverse of string, followed by a new line
 *
 * @s: pointer to char variable
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else if (*s !='\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
