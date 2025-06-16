#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    
// 0 for False  & 1 for True

    printf("%d ",(a>b));    // 0
    printf("%d ",(a<b));     // 1 
    printf("%d ",(a<=b));    // 1
    printf("%d ",(a>=b));    // 0
    printf("%d ",(a==b));    // 0
    printf("%d ",(a!=b));    // 1

    return 0;
}
