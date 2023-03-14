#include "main.h"
#include <stdlib.h>
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int k, i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for(i=0; i < ac; i++)
	{
		for (j=0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str != NULL)
		return (NULL);
	k = 0;

	for (j = 0; av[i][j] != '\0'; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	str[k] = '\n';
	k++;
}

	return (str);
}
