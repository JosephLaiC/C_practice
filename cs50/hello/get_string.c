#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_string.h"

char* get_string() {
    char* name = NULL;
    size_t bufsize = 32;

    name = (char *)malloc(bufsize * sizeof(char));
    if (name == NULL) {
        perror("Unable to allocate buffer");
        return NULL;
    }

    printf("What's your name? ");
    if (getline(&name, &bufsize, stdin) == -1) {
        perror("getline failed");
        free(name);
        return NULL;
    }

    // Remove the newline character if present
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    return name;
}