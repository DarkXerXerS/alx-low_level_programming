#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: print all the alphabet in lower case
 *
 * Return: no return (void)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

