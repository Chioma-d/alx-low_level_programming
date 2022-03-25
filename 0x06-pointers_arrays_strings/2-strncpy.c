#include "main.h"

/**
 * _strncpy - copies a string pointed to by src
 * @dest: pointer to the buffer
 * @src: pointer to the source string
 * @n: length of src
 *
 * Return: char
 */
char *strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}


