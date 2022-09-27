#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 *
 * @n: unsigned int
 * @s: pointer
 * @b: constant byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	_putchar('\n');
	return (s);
}
