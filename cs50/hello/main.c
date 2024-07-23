#include <stdio.h>
#include <stdlib.h>
#include "get_string.h"

int main() {
    char* name = get_string();
    if (name == NULL) {
        perror("Unable to read name");
        exit(1);
    }

    printf("Hello, %s\n", name);
    free(name);
    return 0;
}