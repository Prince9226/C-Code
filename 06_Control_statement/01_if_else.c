#include<stdio.h>
int main(){
  int age;
  printf("Enter your age:");
  scanf("%d",&age);
  if(age >= 18){
    printf("Adult!");
  }else{
    printf("Not Adult!");
  }
  return 0;
}
