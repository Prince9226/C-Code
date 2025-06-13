#include <stdio.h>
int main()
{
	int a, b;
  printf("Enter the no. of a:");
	scanf("%d", &a);
  printf("Enter the no. of b:");
  scanf("%d", &b);
  
	int temp = a;
	a = b;
	b = temp;

	printf("Value of a is %d \n", a);
  printf("Value of b is %d", b);
	return 0;
}
