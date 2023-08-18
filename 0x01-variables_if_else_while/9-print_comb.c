#include <stdio.h>
/**
* main - program that print all the possible combination of number
* Return: always 0
*/
int main(void)
{
int i;
for (i = 0 ; i < 9 ; i++)	
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
