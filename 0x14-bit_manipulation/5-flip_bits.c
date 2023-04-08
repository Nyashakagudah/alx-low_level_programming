#include "main.h"

/**
 * flip_bits - number of bits needs to flip to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (d = 23; d >= 0; d--)
	{
	current = exclusive >> d;
	if (current & 1)
		count++;
	}

	return (count);
}


