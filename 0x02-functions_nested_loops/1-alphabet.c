#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - Entry point
 * Return:0
 */
int main()
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
