#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to structer
 *@name: name of structure
 *@age: age of structure
 *@owner: owner of structure
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return
d->name = name;
d->age = age;
d->owner = owner;
}
