#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: value 1
 * @b: value 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
