#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    // read string from user.
    printf("Enter your string:\n");
    // scanf("%s",str)            // only the first word will be considered.

    scanf("%[^\n]s", &str); // all word will be considered.
    // print your string.
    printf("your input is: %s", str);
    return 0;
}