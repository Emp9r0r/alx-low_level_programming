#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to be evaluated.
 *
 * Description:
 * This function takes a string as input and calculates and returns its length,
 * which is the number of characters in the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int f;

	f = 0;

	while (s[f] != '\0')
	{
		f++;
	}

	return (f);
}

/**
 * *_strcpy - Copies the contents of one string to another.
 * @dest: A pointer to the destination buffer where the string is copied.
 * @src: The source string to be copied.
 *
 * Description:
 * This function takes a source string and copies its content, including the
 * terminating null byte ('\0'), to a destination buffer pointed to by 'dest.'
 * It ensures that the destination buffer receives a copy of the source string.
 *
 * Return: A pointer to the destination buffer ('dest') is returned.
 */

char *_strcpy(char *dest, char *src)
{
	int len, f;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (f = 0; f < len; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
