#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -function
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5", n, m);
else if (m == 0)
printf("Last digit of %d is %d and is zero", n, m);
else if (m < 0 && m != 0)
printf("Last digit of %d is %d and is les than 5 and not 0", n, m);
printf("\n");
return (0);
}
