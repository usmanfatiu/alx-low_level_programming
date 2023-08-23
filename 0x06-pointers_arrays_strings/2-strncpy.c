#include "main.h"
/**
* _strncpy - a function that copies a string
* @dest: destination string pointer
* @src: source string pointer
* @n: number of bytes to be used
* Return: pointer to destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
