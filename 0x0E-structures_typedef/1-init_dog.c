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
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
