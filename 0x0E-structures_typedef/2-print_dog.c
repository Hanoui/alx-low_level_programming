#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This function initializes the name, age, and owner of a dog.
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

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If an element of d is NULL, print "(nil)" instead of that element.
 * If d is NULL, print "NULL".
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        /* Print the name, or "(nil)" if name is NULL */
        printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
        
        /* Print the age */
        printf("Age: %.1f\n", d->age);
        
        /* Print the owner, or "(nil)" if owner is NULL */
        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    }
    else
    {
        printf("NULL\n");
    }
}

