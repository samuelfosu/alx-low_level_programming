#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination.
 * @src: source.
 * @n: bytes filled.
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);

	return (dest);
}
