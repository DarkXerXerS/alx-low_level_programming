#include "main.h"
/**
 * main - Entry point
 *
 * description - print _putchar followed by a newline
 *
 * Return: (an int )
 */
int main(void)
{
	char chart[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(chart[i]);
	}
	_putchar('\n');
	return (0);
}
