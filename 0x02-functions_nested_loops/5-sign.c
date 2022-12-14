#include "main.h"
/**
 * print_sign -print the sign of a num
 * Return: Always 0
 * @n: the num  to be checked for
 * returns 1 and prints + if n is greater than zero
 * 0 and print 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else   
	{
		_putchar('0');
		return (0);
	}
}
