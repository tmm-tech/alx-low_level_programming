#include "main.h"
<<<<<<< HEAD
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
=======

/**
 * _isalpha - check the the entry to deteminate if is lower or upper
 *
 * @c: This is the entry
 * Return: Always 0.
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
 */

int _isalpha(int c)
{
<<<<<<< HEAD
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

=======
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
>>>>>>> 4c2aa54b410913f33f7e02616aec37e441bd1ca7
}
