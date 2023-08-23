#include "main.h"
/**
 * _strmp - compares two strings.
 * @s1: pointer of first string
 * @s2: pointer of second string
 * Return: value less than 0 if string is less than the other, value greater than 0 if string greater than the other and 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
int counter, compare_value;	
counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}
compare_value = s1[counter] - s2[counter];
return (compare_value);
}
