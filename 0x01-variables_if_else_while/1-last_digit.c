#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description - checks the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	c = n % 10;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, c);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	return (0);

}
