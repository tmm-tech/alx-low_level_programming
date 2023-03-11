#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
<<<<<<< HEAD
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
=======
 * _islower - Check if the entry is in lower.
 * @c: This is the entry
 *
 * Return: Always 0.
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
 */

int _islower(int c)
{
<<<<<<< HEAD
	return (c >= 'a' && c <= 'z');

=======
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
}
