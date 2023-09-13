#include "search_algos.h"
/**
 * exponential_search - search value in sorted array(exponential search algo)
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located.if absent/Null return -1
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound, low, high, mid, i;

if (array == NULL || size == 0)
return (-1);

bound = 1;
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}
low = bound / 2;
high = (bound < size - 1) ? bound : size - 1;

printf("Value found between indexes [%lu] and [%lu]\n", low, high);

while (low <= high)
{
mid = (low + high) / 2;
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
if (i < high)
printf("%d, ", array[i]);
else
printf("%d\n", array[i]);
}
if (array[mid] == value)
return (mid);
if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}
return (-1);
}
