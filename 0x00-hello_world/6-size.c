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

char charType;
int intType;
long int longTYpe;
long long int doublType;
float floatType;

printf("Size of char: %lu byte\n", sizeof(charType));
printf("Size of int: %lu byte\n", sizeof(intType));
printf("Size of long int: %lu byte\n", sizeof(longType));
printf("Size of long long int: %lu byte\n", sizeof(doubleType));
printf("Size of float: %lu byte\n", sizeof(floatType));

return (0);

}
