#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Prince yadav";
    char s1[15] = "Prince yadav";
    char s2[15];
    strcpy(s2, s1);  // copy string s1 to s2
    
    printf("%s\n", s1);                  // copy one string to another.

    char str1[20]="Anish\t";
    char str2[]="yadav!";
    printf("%s\n",strcat(str1,str2));      // concatanation your string  
    
    if(strcmp(str1,str2)==0){           // compare two strings.
        printf("strings are equal!\n");
    }
    else{
        printf("strings are not equal!\n");
    }

    // str[2]="t";       //Updating a character in a string
    //  Access the second character in str.

    printf("access the string : %c\n", str[2]);

    // Length of string

    printf("length of string: %d\n", strlen(str));
    printf("size of string : %d", sizeof(str));
    return 0;
}