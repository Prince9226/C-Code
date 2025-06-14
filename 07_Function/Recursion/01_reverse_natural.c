#include<stdio.h>
void fun(int x)
{
  if(x == 0 ){
    return ;
  }
  else{
    printf("%d",x);
    fun(x-1);
  }
}
int main()
{
  fun(5);
  return 0;
}

// 5 4 3 2 1
