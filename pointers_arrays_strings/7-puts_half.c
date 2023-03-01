#include "main.h"

/**
* puts_half - function
* @str: string
* Description: prints half of a string
*
* Return: Always 0;
*/
void puts_half(char *str)
{
int n = 1;
int m;
while (str[n] != '\0')
{
n++;
}
if (n % 2 != 0)
{
m = (n - 1) / 2;
}
else
{
m = n / 2;
}
for (; n > m; m++)
{
_putchar(str[m]);
}
_putchar('\n');
}
