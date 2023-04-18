#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - function that frees dogs
 *@d: pointer to struct dog
 *Rreturn: void
 */
void free_dog(dog_t *d)
{
if (d == 0)
return;
free(d->name);
free(d->owner);
free(d);
}
