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
	int i, size;
	int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	size = sizeof(str) / sizeof(int);
	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
