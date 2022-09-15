#include "main.h"

/**
 * print_sign - determines whether number input
 * is greater, less or equal to 0.
 *
 * @n: the input as integer
 *
 * Return: 1 is grater, 0 is 0, -1 is less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
