#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 *  Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
