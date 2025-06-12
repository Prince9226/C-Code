#include <stdio.h>
#define PI 3.14     // const double PI = 3.14 
int main()
{
    int r;
    printf("Enter value of r:\n");
    scanf("%d", &r);
    printf("Area is: %f", PI * r * r);
    return 0;
}
