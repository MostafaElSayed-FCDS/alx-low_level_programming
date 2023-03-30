#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    // find the length of the destination string
    while (dest[dest_len] != '\0')
        dest_len++;

    // append the source string to the destination string
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    // add the null byte to the end of the concatenated string
    dest[dest_len + i] = '\0';

    return dest;
}
