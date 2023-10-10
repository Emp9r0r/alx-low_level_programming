#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Displays the details of a struct dog.
 * @d: The struct dog to be printed.
 *
 * Description:
 * This function takes a pointer to a struct dog and displays its details.
 * the pet's name, age, and the name of its guardian. It is responsible for
 * presenting the information about the dog in a readable format.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
