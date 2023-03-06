/*
 * File: 1-memcpy.c
 * Auth: Tony Mwangi
 */
#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointedto by @dest.
 * @dest: A pointer tothe memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: Te number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[inde] = source[index];
	return (dest);
}
