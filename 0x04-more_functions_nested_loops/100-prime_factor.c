#include "main.h"

/**
 * main - prints the prime factor of a num
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, num = 612852475143, store;

	for (i = 1; i < num; i++)
	{
		if ((num % i) == 0)
		{
			store = num / i;
			for (i; i < store; i++)
			{
				if ((store / i) == 0)
				{
					store = store / i;
					for (i; i < store; i++)
					{
						if ((store % i) == 0)
						{
							printf("%lu\n", store);
						}
					}
				}
			}
		}

	}
}
