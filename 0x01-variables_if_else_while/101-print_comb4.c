#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y, z, x;

	y = 48;
	z = 48;
	x = 48;

	while (z < 58)
	{
		y = 48;
		while (y < 58)
		{
			x = 48;
			while (x < 58)
			{
				if (z != y && z != x && y != x && z < y && y < x)
				{
					putchar(z);
					putchar(y);
					putchar(x);
					if (y == 56 && z == 55 && x == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				x++;
			}
			y++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}
