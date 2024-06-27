#include "main.h"
/**
 * _strchr - location a character in a string
 * @s: string.
 * @c: character.
 * Return: the pointer to the first ocurrence of the character c.
 */
char *_strchr(char *s, char c);
{
	unsigned int 1 = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
