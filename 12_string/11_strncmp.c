// The strncmp() function compares only the first n characters of two strings.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello eveyone";
    char s2[50] = "Hello";
    int result = strncmp(s1, s2, 5);
    if (result == 0) {
        printf("First 5 characters are equal\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2\n");
    } else {
        printf("String 1 is greater than String 2\n");
    }
    return 0;
}