#include "holberton.h"

/**
 * is_squre_root - determines the square root of
 * @j: an input value
 * @i: input value
 *
 * Description: determines the square root
 * Return: returns the input val
 */

int is_square_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (is_square_root(i, j + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: input number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
