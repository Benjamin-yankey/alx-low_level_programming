#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 1; num <= 10; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
