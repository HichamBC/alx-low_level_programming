#include "main.h"

/**
 * *_strcpy -  copies the string pointed by src to the buffer pointed by dest.
 *
 * @dest: first pointer.
 * @src: second pointer.
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
