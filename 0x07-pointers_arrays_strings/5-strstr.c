#include "main.h"
/**
 *_strpbrk- return pointer to byte in s
*@s: string
*@accept: target matches
*Return: pointer to index of string
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}

		}
		j++;
	}

	return (0);
}
