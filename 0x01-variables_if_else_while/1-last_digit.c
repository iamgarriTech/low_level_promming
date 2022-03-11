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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n = 98;
	if (n > 5)
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	else
		printf("Last digit of %d is less than 6 and not 0\n", n);
	return (0);
}
