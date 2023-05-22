#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *using at most n bytes from src.
 *src does not need to be null terminated.
 *@n: number of bytes to be concatenated.
 *@dest: pointer to destination string.
 *@src: pointer to src string.
 *
 *Return: *dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0; /*length of destination string*/
	int j; /*counter for  n bytes of src*/

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
