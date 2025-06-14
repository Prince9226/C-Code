#include<stdio.h>
int get_max(int x , int y)
{
  if(x > y)
    return x;
  else
    return y;
}
int main ()
{
  int x;
  scanf("%d",&x);
  int y;
  scanf("%d",&y);
  printf("%d",get_max(x,y));
  return 0;
}
