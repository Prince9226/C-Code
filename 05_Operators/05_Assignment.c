#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the number:");
    scanf("%d", &x);
    y = x;
    printf("%d\n", y);
    x += 10;
    printf("%d\n", x);
    x -= 10;
   printf("%d\n", x);
    x *= 2;
    printf("%d\n",x);
    x /= 5;
    printf("%d\n",x);
   

    return 0;
}
