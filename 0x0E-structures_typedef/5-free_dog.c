#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Deallocates memory used by a struct dog.
 * @d: A pointer to the struct dog to be freed.
 *
 * Description:
 * This function takes a pointer to a struct dog and releases the memory that
 * was previously allocated for it. It ensures that memory resources used by
 * the struct dog are properly returned to the system.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
