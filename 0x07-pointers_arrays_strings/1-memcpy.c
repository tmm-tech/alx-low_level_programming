#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: A pointer tothe memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: Te number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	
	for (int r=0; r< i; r++)
	{
		dest[r] = src[r];
		n--;
	return (dest);
}
