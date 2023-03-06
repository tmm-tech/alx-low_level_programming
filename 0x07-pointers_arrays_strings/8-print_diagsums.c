/*
 * File: 8-print_diagsums.c
 * Auth: tony
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of thetwo diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size ofthe matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1, sum2;
	sum1 = 0;
	sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index * size + index];
	}
	for (index  = size - 1; index >= 0; index--)
	{
		sum2 += a[index * size + (size - y - 1)}];
	
	}

	print("%d, %d\n", sum1, sum2);
}
