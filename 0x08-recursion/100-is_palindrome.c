#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int len, int index);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if t is 0 it's not
 */
int is_palindrome(char *s)
{
	if(*s == 0)
		return(1);
	return (check_palindrome(s, 0, _strlen_recursion(s));
}
/**
 * _strlen_recursion  - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	
		return (0);

	return (1 + _sterlen_recursion(s + 1);
}
/**
 * check_palindrome - check the characters recursively for palindrome
 * @s: string to check
 * @i:iterator
 * @len: lengthof the string
 * 
 *Return :1 if palindrome,0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if(*(s +1) != *(s + len -1))
			return (0);
	if(i >= len)
		return (1);
	return (check_palindrome(s,i+1,len 1, i +1 ,len-1));
)
