#include "main.h"

/**
 * is_prime_number - Function returns 1 or 0 if a number is prime.
 *
 * @n: number to check if it is a prime
 * @p_num: the number checker
 *
 * Return: Always 0.
 */
int prime_helper(int n, int p_num);

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	if (n == 2 || 3)
	{
		return (1);
	}
	return (prime_helper(n, 2));
}

/**
 * prime_helper - This function will help us get the prime numbere
 * @n: The square root number we need
 * @p_num: The number checker
 * Return: Return 1 or 0 depending on the sucess
 */

int prime_helper(int n, int p_num)
{
	if (n % p_num)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	p_num++;

	return (prime_helper(n, p_num));
}
