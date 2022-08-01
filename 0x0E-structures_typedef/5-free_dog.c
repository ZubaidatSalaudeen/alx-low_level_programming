#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d: The dog to be freed
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
