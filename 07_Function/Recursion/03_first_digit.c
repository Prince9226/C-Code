#include<stdio.h>
int firstDigit(int n)
{
    while(n > 10){
        n /= 10;
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int dig = firstDigit(n);
    printf("First digit number is: %d", dig);
    return 0;
}
