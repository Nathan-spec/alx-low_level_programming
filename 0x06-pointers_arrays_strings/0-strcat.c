#include "main.h"

/** 
 *strcat - Concatantes two strings.
 *@dest - Pointer to the destination array.
 *@src - String to be appended.
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
