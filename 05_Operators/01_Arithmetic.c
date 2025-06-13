// Arithmetic Operators (+, -, *, /, %, post-increment, pre-increment, post-decrement, pre-decrement)

#include<stdio.h>
int main(){
  int x , y;
  printf("Enter the first number:");
  scanf("%d",&x);
  printf("Enter the second number:");
  scanf("%d",&y);
  
  printf("Add the number:%d\n",x+y);
  printf("Subtraction of the number:%d\n",x-y);
  printf("Multiplication of the number:%d\n",x*y);
  printf("Division of the number:%d\n",x/y);
  printf("Modulus of the number:%d\n",x%y);
  return 0;
}
