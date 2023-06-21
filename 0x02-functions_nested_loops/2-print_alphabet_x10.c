#include "main.h"
/**
 * void print_alphabet_x10(void) - Entry point
 *
 * Description - print the alhabet 10 times
 *
 * Return: void no return
 */
void print_alphabet_x10(void);
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
