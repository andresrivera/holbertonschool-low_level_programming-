#include "main.h"

/**
* print_triangle - Prints a triangle  using the character #.
* @size: The size of the triangle.
*
*/
void print_triangle(int size)
{
int hashc, index;
if (size > 0)
{
for (hashc = 1; hashc <= size; hashc++)
{
for (index = size - hashc; index > 0; index--)
{
_putchar(' ');
}
for (index = 0; index < hashc; index++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

