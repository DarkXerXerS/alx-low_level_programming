#include <stdio.h>
/**
 * main - Entry point
 *
 * return: 0;
 *
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;



	printf("size of char: %c byte(s)\n", sizeof(c));
	printf("size of int: %d byte(s)\n", sizeof(i));
        printf("size of long int: %ld byte(s)\n", sizeof(li));
        printf("size of long long int: %lld byte(s)\n", sizeof(lli));
        printf("size of float: %f byte(s)\n", sizeof(f));
        return (0);
}	
