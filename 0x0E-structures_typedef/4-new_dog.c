#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog -  function that creates a new dog.
 *@name: nmae of the struct
 *@age: age of the struct
 *@owner: owner of the struct
 *
 *Return: 0
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
free(dog_t);
}

new_dog->name = strdup(name);
new_dog->age = age;
new_dog->owner = strdup(owner);
return (new_dog);
}
