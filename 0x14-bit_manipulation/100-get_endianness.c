#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, otherwise 1
 */

int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
