#include "main.h"

/**
 * print_triangle - To print out a square of ##
 * @size: an integer parameter for the triangle
 * Return: 0 Success
 */

void print_triangle(int size)
{
	int tri_rows;
	int tri_cols;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sq_rows = 1; sq_rows <= size; sq_rows++)
	{
		for (sq_cols = 1; sq_cols <= size; sq_cols++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
