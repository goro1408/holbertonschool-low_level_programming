#include "main.h"

/**
 * print_number - Prints an interger.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) >0)
		print_number(num / 10)

	_punchar((num % 10) + '0');
}
