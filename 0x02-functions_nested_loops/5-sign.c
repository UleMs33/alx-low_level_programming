#include "main.h"

/**
 * print_sign - determines whether input number is
 * greater, equal or less than 0
 *
 * @n: the input as integer
 *
 * Return: 1 is greater, -1 is less than, 0 is zero
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
