#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print upper case and lowercase with putchar
 *
 * Return: (sucess)
 */
int main(void)
{
	int i;
	int q;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (q = 65; q <= 90; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
