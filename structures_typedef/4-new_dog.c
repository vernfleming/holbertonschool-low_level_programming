#include <stdio.h>
#include <stdlib.h>  /* For malloc and free */

/* Define the dog structure */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function to calculate the length of a string manually */
int string_length(char *str) {
  int i;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

/* Function to create a new dog */
dog_t *new_dog(char *name, float age, char *owner) {
    /* Allocate memory for the new dog structure */
    dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL) {  /* Check if malloc failed */
        return NULL;
    }

    /* Allocate memory for the name string and copy the content manually */
    if (name != NULL) {
        d->name = malloc(string_length(name) + 1);  /* +1 for the null terminator */
        if (d->name == NULL) {  /* Check if malloc failed */
            free(d);
            return NULL;
        }
        /* Manual string copy (without using memcpy or strdup) */
        for (i = 0; name[i] != '\0'; i++) {
            d->name[i] = name[i];
        }
        d->name[string_length(name)] = '\0';  /* Null terminate the string */
    } else {
        d->name = NULL;  /* If name is NULL, set it to NULL */
    }

    /* Allocate memory for the owner string and copy the content manually
