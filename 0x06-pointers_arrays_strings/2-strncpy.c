#include "main.h"
/**
 *_strncpy - function that copies a string.
 *@n: number of bytes to be concatenated.
 *@dest: pointer to destination string.
 *@src: pointer to src string.
 *
 *Return: *dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i; /*represents byte count*/

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
