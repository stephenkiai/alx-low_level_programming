#include "main.h"
/**
 *_strcmp - compares two strings.
 *@s1: first string pointer.
 *@s2: second string pointer.
 *
 *Return: compared values.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0; /*string index counter*/
int j; /*compared values*/

while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
j = s1[i] - s2[i];
return (j);
}
