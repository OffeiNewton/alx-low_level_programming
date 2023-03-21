#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include "dog.h"

/* Header contents go here */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif /* MY_HEADER_H */
