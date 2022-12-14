#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @n: unsigned int
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
