#include <stdio.h>
/**
* main - program that print number using putchar and  not using char
* Return: always 0
*/
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
putchar('\n');
return (0);
}
