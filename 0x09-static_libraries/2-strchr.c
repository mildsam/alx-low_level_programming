#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @c: character
 * @s: pointer
 * Return: (s + i)
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
