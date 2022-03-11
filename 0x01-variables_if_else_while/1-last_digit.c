#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	else if (last == 0)
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	else if
		(last < 6)
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}
