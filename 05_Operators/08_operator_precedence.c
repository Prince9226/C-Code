#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    int z = x + x * y;
    printf("%d\n", z);   // 210
    z = y / x * x;
    printf("%d\n", z);    // 20
    z = y = x;
    printf("%d\n", y);   // 10
    printf("%d", z);     // 10
    return 0;
}
