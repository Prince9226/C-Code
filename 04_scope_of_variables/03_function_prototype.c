// Function prototype scope.
#include<stdio.h>
int Sub(int num1, int num2);
int Sub(int num1, int num2)
{
  return num1 - num2;
}
int main()
{
  printf("%d\n",Sub(10,4));
  return 0;
}
