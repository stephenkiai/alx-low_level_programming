#include "main.h"
/**
 *swap_int - swaps the values of two integers using pointers
 *@a: pointer
 *@b: pointer
 *
 *Return void
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
