#include <stdio.h>
#include "main.h"

/**
* main - function
* @argc: number of arguments
* @argv: array of arguments
* description - Print name of program
*
* Return: Always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
