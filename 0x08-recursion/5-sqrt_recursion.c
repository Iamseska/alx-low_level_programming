#include "main.h"
#include <stdio.h>
int sqrt(int n, int i)
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n);
{
	return (sqrt(n, 1));
}
/**
 * _sqrt - calculate natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (sqrt(n, i + 1));
}

