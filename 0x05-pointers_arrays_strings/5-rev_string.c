#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: pointer pointing to the string
 * Return: 0
 */
void rev_string(char *s)
{
int lenght, z, half;
char temp;
for (lenght = 0; s[lenght] != '\0'; lenght++)
;
z = 0;
half = lenght / 2;
while (half--)
{
temp = s[lenght - z - 1];
s[lenght - z - 1] = s[z];
s[z] = temp;
z++;
}
}
