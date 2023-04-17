#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns string length
 * @s: string to evaluate
 *
 * Return: strength length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copies string
 * @dest: pointer to buffer
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *ndog;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc((len1 + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc((len2 + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}
