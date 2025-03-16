#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


int string_length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

dog_t *new_dog(char *name, float age, char *owner) {
  int i;
  dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL) {
        return NULL;
    }

    if (name != NULL) {
        d->name = malloc(string_length(name) + 1);
        if (d->name == NULL) {
            free(d);
            return NULL;
        }
        for (i = 0; name[i] != '\0'; i++) {
            d->name[i] = name[i];
        }
        d->name[string_length(name)] = '\0';
    } else {
        d->name = NULL;
    }

    if (owner != NULL) {
        d->owner = malloc(string_length(owner) + 1);
        if (d->owner == NULL) {
            free(d->name);
            free(d);
            return NULL;
        }
        for (i = 0; owner[i] != '\0'; i++) {
            d->owner[i] = owner[i];
        }
        d->owner[string_length(owner)] = '\0';
    } else {
        d->owner = NULL;
    }

    d->age = age;

    return d;
}
