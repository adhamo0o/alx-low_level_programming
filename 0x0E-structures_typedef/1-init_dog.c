<<<<<<< HEAD
#ifndef DOG_H
#define DOG_H
/**
 *init_dog - initia;iaes a variable of type struct dog
 *@d: pointer to struct dog
 *@name: pointer to name string
 *@age: pinter to age
 *@owner: ponter to owner string
 *Return: void
 */
=======
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to struct name
 * @age: pointer to struct age
 * @owner: pointer to struct owner
 * Return: void
*/
>>>>>>> 8e23bf26161de4cbc31bf4d86cee57538b295423
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
<<<<<<< HEAD
d->name = name;
d->age = age;
d->owner = owner;
=======
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
>>>>>>> 8e23bf26161de4cbc31bf4d86cee57538b295423
}
}
