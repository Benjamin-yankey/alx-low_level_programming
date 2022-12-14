#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @Nnum: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int Nnum)
{
	int last_num;

	last_num = (Nnum % 10);

	if (last_num < 0)
	{
		last_num = (-1 * last_num);
	}

	_putchar(last_num + '0');
	return (last_num);

}
