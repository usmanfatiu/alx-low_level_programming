#include <stdio.h>
/**
*main - program that writes letter in reverse
*return: always 0
*/
int main(void)
{
char i;
for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
