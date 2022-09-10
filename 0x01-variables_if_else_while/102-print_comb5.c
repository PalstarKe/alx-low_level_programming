#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, j, b, l, op1, op2;

n = j = b = l = 48;
while (l < 58)
{
	b = 48;
	while (b < 58)
	{
		j = 48;
		while (j < 58)
		{
			n = 48;
			while (n < 58)
			{
				op1 = (l * 10) + b;
				op2 = (j * 10) + n;
				if (op1 < op2)
				{
					putchar(l);
					putchar(b);
					putchar(' ');
					putchar(j);
					putchar(n);
					if (l == 57 && b == 56 && j == 57 && n == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				n++;
			}
			j++;
		}
		b++;
	}
	l++;
}
putchar('\n');
return (0);
}
