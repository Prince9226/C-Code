#include<stdio.h>
#include<string.h>

// Write a function to insert a new character in a string at a given position.
int main(){
    char str[20]="Ansu";
    printf("Old string : %s\n",&str);

    // 3rd index pe 'h'.
    for(int i =3;i>=3;i--){
        str[i+1]=str[i];
    }
    str[3]='h';
    printf("Your new string : %s\n",str);
    return 0;

}