#include "main.h"
/**
 *get_endianness-  checks the endianness.
 *Endianness- its the byte order in which a multibyte value is stored in memory
 *union- ==user-defined datatype-similar to structure with 1 key diff
 *in a union, only one data member can hold a value at a time.
 *size of a union is the size of its largest member
 *Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
union
{
int i;
char c[sizeof(int)];   /* Array of 4 characters (1 byte each) */
} u = {1};            /* Initialize to 1 to set the first byte to 1 */

/* Check the first byte of the integer in the union */
return (u.c[0] == 1);
}
