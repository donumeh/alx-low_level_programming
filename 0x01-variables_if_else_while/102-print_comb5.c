#include <stdio.h>

/**
 * main - print possible combinations of two two-dgits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
		for (j = 48; j <= 56; j++)
			for (k = 48; k <= 57; k++)
				for (l = 49; l <= 57; l++)
				{
					if (j > l || i > k)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');

	return (0);
}
