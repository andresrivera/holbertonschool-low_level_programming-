#include "main.h"

/**
* *_strcat - function
* @dest: string
* @src: string initial
* Description: aappende src string to dest string
*
* Return: return pointer to string d
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != 0; i++)
{

}
for (j = 0; src[j] != 0; j++, i++)
{
dest[i] = src[j];
}
return (dest);
}
