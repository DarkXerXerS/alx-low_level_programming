#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: letter being tested
 * Description - check for lower case character
 *
 * Return: (0)
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
		else
		{
			return (0);
		}
	}
}
