#include<stdio.h>
/**
 * main - Entry point
 * Description: prints C program that prints the size of various types on the computer it is compiled and run on.
 * Returns: 0
 *
 * Descriptions: This function prints a message to the console using the
 *              puts() function.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);

}
