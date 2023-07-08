#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer in the memory
 * @b: the character to fill n bytes of memory
 * @n: the length of memory to be filled using _memset
 * Return: (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
