#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an intergar.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int k=n;
	
	if n(n < 0)
	{
		n *= -1;
		k = n;
		_punchar('-');
	}
	K /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
	]
