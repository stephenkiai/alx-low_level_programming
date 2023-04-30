#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination array.
*@src: pointer to src string.
*
*Return: *dest.
 */
char *_strcat(char *dest, char *src)
{
	int length = 0; /*length of destination string*/
	int j; /*counter for  n bytes of src*/

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
