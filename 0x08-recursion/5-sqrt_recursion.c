#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to find its square root
 *
 * Return: Always 0.
 */
int _get_square(int n, int square);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (_get_square(n, 1));
}

/**
 * _get_square - This function will help us get the square
 * @n: The square root number we need
 * @square: The number that will multiply it self to give us n
 * Return: Return the square number
 */


int _get_square(int n, int square)
{
	if (square > n / 2)
	{
		return (-1);
	}

	if (square * square == n)
	{
		return (square);
	}

	square++;

	return (_get_square(n, square));
}
