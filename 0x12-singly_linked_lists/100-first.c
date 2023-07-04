#include "lists.h"

void first() __attribute__ ((constructor));
/**
 * first - prints an algorithm first
 *
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
