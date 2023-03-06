/*
 * File: 4-strpbrk.c
 * Auth:tmm-tech (Tony MWANGI mugi)
 */

#include "main.h"

/**
 * _strpbrk - Searches a string  for any of a set of bytes.
 * @s: Te string to be searched.
 * @accept: The setof bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	it index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
