#include <stdio.h>

/**
 * main - Entry point
 *
 * Description -
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + 48);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
