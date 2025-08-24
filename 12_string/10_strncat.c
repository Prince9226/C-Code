#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Prince";
    char s2[50] = "Priya yadav";
    strncat(s1,s2,6);
    printf("%s\n", s1);

    char s3[50] = "Prince ";
    strncat(s3,s2,3);    // only 3 characters from s2
    printf("%s", s3);
    return 0;
}