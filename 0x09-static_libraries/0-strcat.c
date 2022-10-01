#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: A pointer for character to be changed
 * @src: A pointer for character to be changed
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
