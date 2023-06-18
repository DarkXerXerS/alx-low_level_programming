#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print with putchar a to z
 *
 * Return: (sucess);
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
