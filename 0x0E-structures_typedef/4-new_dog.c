#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - struct to change
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, k, l;
	dog_t *ruffo;

	ruffo = malloc(sizeof(dog_t)); /*struct mem*/
	if (ruffo == NULL)
		return (NULL);
	for (k = 0; name[k]; k++)
		;
	for (l = 0; owner[l]; l++)
		;

	ruffo->name = malloc(k + 1); /*name mem*/
	ruffo->owner = malloc(l + 1); /*owner mem*/
	if (ruffo->name == NULL || ruffo->owner == NULL)
		free(ruffo->name);
		free(ruffo->owner);
		free(ruffo);
		return (NULL);
       	for (i = 0; i < k; i++)
		ruffo->name[i] = name[i];
	ruffo->name[i] = '\0';
	for (i = 0; i < l; i++)
		ruffo->owner[i] = owner[i];
	ruffo->owner[i] = '\0';
	ruffo->age = age;
	return (ruffo);
}
