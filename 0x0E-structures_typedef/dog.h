#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: defines a dog's attributes
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_t;

void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
