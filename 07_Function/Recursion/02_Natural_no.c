#include<stdio.h>
void fun(int x)
{
  if(x == 0 ){
    return ;
  }
  else{
    fun(x-1);
    printf("%d\n",x);
    
  }
}
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n); 
  
  fun(n);
  return 0;
}


/* Output
Enter the number:5
  1
  2
  3
  4
  5
  */
