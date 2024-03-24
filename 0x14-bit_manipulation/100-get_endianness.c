#include "main.h"

/**
 * get_endianness - To get the endian of a value
 * Return: 1 if small endian, 0 if big
 */

int get_endianness(void)

{
	int a  = 1;
	char *b = (char *)&a;

	return (*b);
}
