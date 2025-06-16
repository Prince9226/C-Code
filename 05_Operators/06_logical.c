#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int x = 10, y = 20;
	  bool res = (x > 0 && x < 10);
    printf("%d\n", res); // 0
    res = (x > 0 || x > y);
    printf("%d\n", res); // 1
    res = !res;
    printf("%d", res); // 0
    return 0;
}
