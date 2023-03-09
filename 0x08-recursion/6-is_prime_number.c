#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);
/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: if the number is divisble - 0.
 * If the number is not divisble -1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
