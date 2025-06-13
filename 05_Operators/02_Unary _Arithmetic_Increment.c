#include<stdio.h>
int main(){
  int x;
  printf("Enter the number:");
  scanf("%d",&x);
  int y = x++;       // y = x; y = x+1;
  int z = ++x;      // x = x + 1; x = z
  printf("%d %d %d",x , y, z);
  return 0;
}
  
