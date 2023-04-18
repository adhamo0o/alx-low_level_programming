#ifndef DOG_H
#define DOG_H
/**
 *print_dog -  prints a struct dog
 *@d: pointer to struct of a dog
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name ; "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner ; "(nil)");
}