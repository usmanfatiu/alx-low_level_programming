#include <stdio.h>
/**
*main -programs that prints alphabet withot q and e
*Return: always 0
*/
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
if (i != 'e' && i != 'q')
putchar(i);
return (0);
}
