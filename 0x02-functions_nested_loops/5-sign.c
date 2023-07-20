#include "main.h"

/**
 * print_sign - function to print sign
 * @n: parameters to be checked
 *
 * Return: 1 or 0 or -1 when successful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
