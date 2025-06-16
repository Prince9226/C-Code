#include <stdio.h>
int main()
{
    int x;
    printf("Enter a Number: \n");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Positive ");
        if (x % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    else if (x < 0)
    {
        printf("Negative ");
        if (x % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}
