#include "main.h"

/**
<<<<<<< HEAD
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
=======
 *_strcat - This is the main copy
 *@dest: This is my dest
 *@src: This is my source
 *
 * Return: This return to the result
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
	}
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
	return (dest);
}
