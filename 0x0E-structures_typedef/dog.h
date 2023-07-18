#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type struct dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

