#include "dog.h"
#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* check if pointer is valid */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
