#include "main.h"
#include <stdio.h>

/**
 * print_rev - entry point
 *
 * Description: tu connais flemme un peu
 *@str: poiteur de la chaine a compter
 * Return: la longueur de la chaine
 */

void print_rev(char *str)
{

	int c = 0;

	int n = 0;

	while (str[c])
	{
		++c;
	}

	for (n = c - 1; n >= 0; n--)
	{
		_putchar(str[n]);
	}

	putchar('\n');
}
