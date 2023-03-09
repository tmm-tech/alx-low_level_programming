#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);
/**
 * is_prime_number - says if an integer is a prime number
 * or not
 * @n: number to evaluate
 *
 * Return: 1 if n is aprime number, 0 ifnot
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, n - 1));
}
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
	if (div == 1)
		return (1);
	if (num % div == 0 && div > 0)
		return (0);
	return (is_divisible(num, div - 1));
}
