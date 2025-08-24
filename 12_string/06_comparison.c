// Function must return 0 if both the strings are equal, 1 if s1 is greater than s2, and -1 if s1 is lesser than s2.
#include<stdio.h>
#include<string.h>
int stringComparison(char s1[], char s2[]) {

    // code here
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]<s2[i])
            return -1;
        else if(s1[i]>s2[i])
            return 1;
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else if(s1[i]=='\0')
        return -1;
    else
        return 1;
}
int main() {
    printf("%d\n", stringComparison("adding", "addio"));  // Output: -1
    printf("%d\n", stringComparison("abcno", "abcng"));   // Output: 1
    printf("%d\n", stringComparison("hello", "hello"));   // Output: 0
    return 0;
}