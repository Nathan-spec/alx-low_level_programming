#include "main.h"

/**
 * _strncat - Concantenates two strings.
 * @dest:Pointer to the destination array.
 * @src:String to be appended.
 *
 * @n: number of bytes to be concatenated.
 *
 * Return : pointer to be concatenated.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++; length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
