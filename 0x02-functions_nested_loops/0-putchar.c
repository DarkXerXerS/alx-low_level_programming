#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i, size;

	size = sizeof(str) / sizeof(int);
	for (i = 0; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

