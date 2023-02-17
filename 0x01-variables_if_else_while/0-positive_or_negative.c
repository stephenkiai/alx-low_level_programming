#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description:This program will assign a random number to the variable n
 * print whether the number stored in the variable n is positive or negative.
 * Returns: 0
 *
 * Descriptions: This function prints a message to the console using the
 *              printf() function.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

if (n > 0)
printf("The number is positive\n");

else if (n == 0)
printf("The number is zero\n");

else
printf("The number is negative\n");

return (0);
}
