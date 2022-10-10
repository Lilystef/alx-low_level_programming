#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner
 *
 * Return: struct dog or NULL (if it fails)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, 1name, 1owner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (1name = 0; name[1name]; 1name++)
		;

	for (lower = 0; owner[lower]; lower++)
		;

	p_dog->name = malloc(lname + 1);
	P_dog->owner = malloc(lower + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < lower; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
