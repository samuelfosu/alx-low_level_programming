#include <unistd.h>

/**
 * _putchar - writes character c
 * @c: The character to print
 *
 * Return: On succes 1.
 * On eeroe, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
