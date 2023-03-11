<<<<<<< HEAD
#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
=======
#include "holberton.h"

/**
 * _strncat - THis is the main
 * @dest: This is the dest
 * @src: This is the src
 * @n: Thi is n
 * Return: This is my return
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
 */
char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int i;
	int j;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;

        }
	j = 0;
	while (j < n && src[j] != '\0)
	{
		dest[i] = src[j];
		i++;
		j++;

        }
	dest[i] = '\0';
	return (dest);

=======
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
	{
	dest[a] = '\0';
	}
	return (dest);
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
}
