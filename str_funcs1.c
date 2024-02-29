/*
 * File: str_funcs1.c
 * Auth: Abebe Tesfaye
 *       Biniyam Tamene
 */

#include "shell.h"

/**
 * _strlen - Returns the length of a string
 * @s: A pointer to a character string
 * 
 * Return: the length of a character string
 */

int _strlen(const char *s)
{
int length = 0;

if (!s)
return (length);
for (length = 0; s[length]; length++)
;
return (length);
}

/**
 * _strcpy - Copies
 * @dest: destination
 * @src: source
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
size_t i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * _strcat - Concatinates two string
 * @dest: destination
 * @src: source
 *
 * Return: Concatenated string
 */

char *_strcat(char *dest, const char *src)
{
char *destTemp;
const char *srcTemp;

destTemp = dest;
srcTemp = src;

while (*destTemp != '\0')
*destTemp++ = *srcTemp++;
*destTemp = '\0';
return (dest);
}

/**
 * _strncat - Concatenates two string
 * @dest: destination
 * @src: source
 * @n: n bytes to copy from source
 *
 * Return: Pointer to destination string
 */

char *_strncat(char *dest, const char *src, size_t n)
{
size_t dest_len = _strlen(dest);
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
