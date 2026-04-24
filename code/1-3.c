#include <stdio.h>

char *my_strcat(char *dst, const char *src) {
    int i=0;
    while (dst[i] != '\0') {
        i++;
    }
    
    int j=0;
    while (src[j] != '\0') {
        dst[i++] = src[j];
        j++;
    }
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);
}