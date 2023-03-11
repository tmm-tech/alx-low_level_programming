<<<<<<< HEAD
#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
=======
#include "holberton.h"

/**
 * _memcpy - This is my funcion copy Src to dest
 * @dest: This is my result
 * @src: This is my string
 * @n: This is n my number bytes to copy
 *
 * Return: This my my string copy
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
	int r = 0;
	int i = n;
	
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

=======
	unsigned int a;
	char *pDst = dest;
	char const *pSrc =  src;

	for (a = 0; a < n; a++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
}
