#include <stdio.h>

int main() 
{
	int x , y;
    printf("enter the number:");   // 3
    scanf("%d",&x);
    printf("enter the number:");     // 6
    scanf("%d",&y);

  	printf("%d\n", x & y);    // 2
  	printf("%d\n", x | y);   // 7
    printf("%d", x ^ y);     // 5
    return 0;
}
