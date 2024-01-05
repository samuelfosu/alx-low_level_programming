#include "main.h"

/**
 * string_toupper - change all lowercase letters
 * of a string to uppercase.
 * @s: string
 * dest: destination.
 * Return: to dest
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
