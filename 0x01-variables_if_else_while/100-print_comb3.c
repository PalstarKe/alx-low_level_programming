#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, j;

	n = 48;
	j = 48;

	while (j < 58)
	{
		n = 48;
		while (n < 58)
		{
			if (j != n && j < n)
			{
				putchar(j);
				putchar(n);
				if (n == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
