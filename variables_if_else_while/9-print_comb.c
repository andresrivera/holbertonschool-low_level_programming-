#include <stdio.h>

/**
* main - function
* description - Print all possible combinations of a single digit number
*
* Return: Always 0
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
if (n < 9)
{
putchar(',');
putchar(' ');
}
}

return (0);
}
