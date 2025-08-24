#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    printf("Enter two string: \n");
    fgets(s1, 50, stdin);
    fgets(s2, 50, stdin);
    if(strncmp(s1, s2, strlen(s2)) == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}