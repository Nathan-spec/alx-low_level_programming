#include "main.h"

/**
 *_strcat - Concatantes two strings.
 *@dest: Pointer to the destination array.
 *@src: String to be appended.
 *Return: address of dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
