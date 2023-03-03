#include "main.h"
/**
 *reverse_array - reverses elements of an integer array.
 *@n: number of elements of the array.
 *@a: array of integers
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j;

for (i = 0; i < (n - 1) / 2; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
