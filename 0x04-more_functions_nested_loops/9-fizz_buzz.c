#include <stdio.h>
/**
* main - prints the numbers from 1 to 100
* For multiples of three print Fizz instead of the number
* and for the multiples of five print Buzz
* For numbers which are multiples
* of both three and five print FizzBuzz
* Return: 0 always
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
printf(" ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
printf(" ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
return (0);
}
