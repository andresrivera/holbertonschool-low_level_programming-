#include "main.h"
#include <stdio.h>

/**
* print_buffer - function
* @b: character string pointer
* @size: integer
* Description: print the buffer
*
* Return: Always 0
*/
void print_buffer(char *b, int size)
{
int i, j;
i = 0;
if (size <= 0)
putchar('\n');
else
{
while (i < size)
{
printf("%08x: ", i);
j = 0;
while (j < 10)
{
if (j % 2 == 0 && j > 0)
printf(" ");
if (j + i > size - 1)
printf("  ");
else
printf("%.2x", b[j + i]);
j++;
}
putchar(' ');
j = 0;
while (j < 10)
{
if (j + i > size - 1)
break;
if (b[j + i] >= ' ' && b[j + i] <= '~')
putchar(b[j + i]);
else
putchar('.');
j++;
}
putchar('\n');
i += 10;
}
}
}
