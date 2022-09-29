#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to char variable
 *
 * Return: 0,
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
