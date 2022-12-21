#include "main.h"
/**
 *_isupper- cheches if c is upercase
 *@c: a caracter to be checked
 *Return: Always 0
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

