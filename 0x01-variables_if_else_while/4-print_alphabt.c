#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print all lowercase except q and e
 *
 *Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
