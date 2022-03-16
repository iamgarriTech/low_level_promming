#include <stdlib.h>
#include <string.h>
#include "main.h"
#include<stdio.h>

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		_putchar(c);
	_putchar('\n');
}
