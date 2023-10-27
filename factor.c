#include "main.h"
/**
 * factorize - function to factorize a number
 * @n: number to factorize
 * Return: int
 */
int factorize(char *n)
{
u_int32_t num;
u_int32_t q;
num = atoi(n);
for (q = 2; q < num; q++)
{
if (num % q == 0)
{
printf("%d=%d*%d\n", num, num/q, q);
break;
}
}
return (0);
}
