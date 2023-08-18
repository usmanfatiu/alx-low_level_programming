#include <stdio.h>
/**
*main - program that writes letter in reverse
*Return: always 0 (indicating successfull execution)
*/
int main(void)
{
char i;
for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
