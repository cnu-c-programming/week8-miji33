#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    for (int i=0; a[i] != '\0' || b[i] != '\0'; i++) {
        if (a[i] != b[i]) 
            return a[i] - b[i];
    }
    return 0;
}

int main() {

    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}