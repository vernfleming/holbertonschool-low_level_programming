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

    /* Allocate memory for the name string and copy the content manually */
    if (name != NULL) {
        d->name = malloc(string_length(name) + 1);
        if (d->name == NULL) {
            free(d);
            return NULL;
        }
        /* Manual string copy (without using memcpy or strdup) */
        for (i = 0; name[i] != '\0'; i++) {
            d->name[i] = name[i];
        }
        d->name[string_length(name)] = '\0';
    } else {
        d->name = NULL;
    }
