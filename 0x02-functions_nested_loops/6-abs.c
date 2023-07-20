#include "main.h"

/**
 * _abs - prints absolute numbers
 * @b: parameter to be checked
 *
 * Return: -b or b
 */

int _abs(int b)
{
	if (b < 0)
		return (-b);
	else if (b >= 0)
	{
		return (b);
	}
	return (0);
}
