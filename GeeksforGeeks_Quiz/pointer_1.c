/*You have to complete all functions sub(), add() & compute(). All functions should take two 
arguments a and b but compute() will take one extra argument as function pointer. 
sub() and add() etc  will return the result but compute() will print the result as per function call*/


#include<stdio.h>
int sub(int a, int b){
    return a-b;
}
int add(int a, int b){
    return a+b;
}
int multiplication(int a, int b){
    return a*b;
}
void compute(int a, int b,int (*operation)(int , int )){
    printf("%d \n",operation(a,b));
}

int main(){
    int a = 4,b=3;
    compute(a,b,sub);
    compute(a,b,add);
    compute(a,b,multiplication);
}