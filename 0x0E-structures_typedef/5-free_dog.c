#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function takes a pointer to a dog structure and frees the
 * memory allocated for its 'name' and 'owner' members, as well as the memory
 * allocated for the structure itself.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}

