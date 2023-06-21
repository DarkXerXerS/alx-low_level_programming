#include "main.h"
/**
 * _isalpha - check for lower and upper case alphabet
 *
 * @c: letter being tested
 *
 * Return: always 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c >= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
