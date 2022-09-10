#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, j, b;

	n = 48;
	j = 48;
	b = 48;

	while (j < 58)
	{
		n = 48;
		while (n < 58)
		{
			b = 48;
			while (b < 58)
			{
				if (j != n && j != b && n != b && j < n && n < b)
				{
					putchar(j);
					putchar(n);
					putchar(b);
					if (n == 56 && j == 55 && b == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				b++;
			}
			n++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
