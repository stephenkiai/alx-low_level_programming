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
  int i = 0; /*represents array elements indexes*/
  int temp; /*store a copy of one of the values that is being swapped*/

  n= n - 1;
 while (i <= n)
   {
     temp = a[i];
     a[i++] = a[n];
     temp = a[n];
   }
}
