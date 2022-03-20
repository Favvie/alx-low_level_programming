#include <ctype.h>

/**
 * _isupper - checks for uppper case
 * @c: character parameter
 *
 * Return: 0 when not uppercase, 1 when uppercase
 */
int _isupper(char c)
{
	return (c > 65 && c < 91);
}
