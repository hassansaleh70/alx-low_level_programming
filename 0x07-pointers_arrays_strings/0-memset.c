#include "main.h"

/**
 * Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed
 * FYI: The standard library provides a similar function: memset. Run man mem.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (idex = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
