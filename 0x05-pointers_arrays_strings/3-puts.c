#include "main.h"
/**
 * Write a function that prints a string, followed by a new line, to stdout
 * @3-puts.c
 * Return: 0 always
 */
void _puts(char *str)
{
	int i = 0;
	while(str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
