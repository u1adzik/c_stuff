#include <stdio.h>
#include <stdlib.h>

char *get_string(int *len) {
    *len = 0; // string is empty at the beginning
    int capacity = 1; // capacity of container of the dynamic string
    char *s = (char*) malloc(sizeof(char)); // dynamic empty string

    char c = getchar(); // symbol for string-reading

    while (c != '\n') {
        s[(*len)++] = c; // add the symbol to the string

        // increase capacity if the real size is more than container capacity
        if (*len >= capacity) {
            capacity *= 2;
            s = (char*) realloc(s, capacity * sizeof(char));
        }

        c = getchar();  
    }

    s[*len] = '\0'; // null character

    return s;
}
