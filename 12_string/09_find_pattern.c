#include <stdio.h>
#include <string.h>

int findPattern(char s[], char p[]) {
    int len_s = strlen(s);
    int len_p = strlen(p);

    // Loop through each possible starting index
    for (int i = 0; i <= len_s - len_p; i++) {
        int j;
        for (j = 0; j < len_p; j++) {
            if (s[i + j] != p[j])
                break;
        }
        if (j == len_p)
            return i; // Match found
    }

    return -1; // No match found
}

int main() {
    char s1[] = "Hello";
    char p1[] = "llo";
    printf("Output: %d\n", findPattern(s1, p1)); // Output: 2

    char s2[] = "World";
    char p2[] = "Doodle";
    printf("Output: %d\n", findPattern(s2, p2)); // Output: -1

    return 0;
}