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

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("%s\n", d->name);

printf("%.1f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nill)\n");
else
printf("%s\n", d->owner);

}
