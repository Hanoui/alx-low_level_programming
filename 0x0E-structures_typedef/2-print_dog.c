#include "dog.h"
#include <stdio.h>

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
        printf("Age: %.6f\n", d->age);
        
        /* Print the owner, or "(nil)" if owner is NULL */
        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    }
    else
    {
        printf("Error: NULL pointer\n");
    }
}

