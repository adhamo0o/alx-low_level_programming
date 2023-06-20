#include "dog.h"
#include <stdio.h>
/**
 *print_dog - function that prints a struct dog
 *@d: pointer to struct
 *
 *Return: 0
 *
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->age == 0.0 || d->owner == NULL)
printf("nill\n");
else if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n Age: %.1f\n Owner: %s\n", d->name, d->age, d->owner);

}
