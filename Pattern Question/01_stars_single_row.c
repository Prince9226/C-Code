#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        printf("* ");
    }
    return 0;
}
