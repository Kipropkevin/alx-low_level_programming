#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer that represents memory block
 *     to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory
 *           for an array using memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
 */
