#include "search_algos.h"

/**
 * linear_search - searches value in array of integers(Linear search algorithm)
 * @array: pointer to the first element of the array 
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located. if absent/Null return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
