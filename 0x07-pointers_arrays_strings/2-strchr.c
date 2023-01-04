#inlcude "main.h"

/**
 * _strchr - gets the length of a prefix suubstring.
 * @s: string
 * @c: character.
 * Return: pointer to first character occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
