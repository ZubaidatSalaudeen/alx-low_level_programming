#include "dog.h"
/**
 * init_dog - initializes a variable of tyoe struct dog
 * @d: variable name
 * @name: name of the dog
 * @age: dog's age
 * @owner: Its owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
