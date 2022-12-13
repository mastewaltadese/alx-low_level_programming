#include "main.h"
/**
 * _islower - check if a char is lowercase
 * Return: 1 if char is lowercase, otherwise .
 * c -represent character
 */
int _islower(int c)
{
	if (c >= 'c' && c <= 'z')
		return (1);
	else
		return (0);
}
