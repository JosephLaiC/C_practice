#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* name = NULL;
    size_t bufsize = 32;

    name = (char *)malloc(bufsize * sizeof(char));
    if (name == NULL) {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("What's your name? ");
    if (getline(&name, &bufsize, stdin) == -1) {
        perror("getline failed");
        free(name);
        exit(1);
    }

    // Remove the newline character if present
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s\n", name);
    free(name);
    return 0;
}
