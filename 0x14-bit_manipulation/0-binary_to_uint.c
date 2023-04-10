#include "main.h"
/**
 *binary_to_uint-  converts a binary number to an unsigned int.
 *@b: pointer to a string of 0 and 1 chars
 *Return: unsigned int or 0 if b=NULL && 1/more string b chars isnt 0/1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int i = 0;

if (b == NULL)
return (0);/*Return 0 if the input string is null*/

while (b[i] != '\0')/*Loop through until null terminator is reached*/
{
if (b[i] != '0' && b[i] != '1')
return (0);/*returned if contains a character not '0' or '1*/
decimal = decimal * 2 + (b[i] - '0');/*Add current bit to the binary number*/
i++;
}
return (decimal);
}
