#include "main.h"

/**
 * _strstr - Locates first occurence in the string
 * @needle: substring
 * @haystack: string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && *p != '\0')
		{
			m++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	retuen (0);
}
