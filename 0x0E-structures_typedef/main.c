#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* Include the string.h header for string operations */
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    /* Use character arrays to store strings */
    char name[] = "Poppy";
    char owner[] = "Bob";

    /* Allocate memory for the name and owner members and copy the strings */
    my_dog.name = malloc(strlen(name) + 1);
    my_dog.owner = malloc(strlen(owner) + 1);

    if (my_dog.name == NULL || my_dog.owner == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return (1); /* Return an error code */
    }

    strcpy(my_dog.name, name);
    strcpy(my_dog.owner, owner);

    my_dog.age = 3.5;

    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

    /* Don't forget to free the allocated memory */
    free(my_dog.name);
    free(my_dog.owner);

    return (0);
}
