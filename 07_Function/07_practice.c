#include<stdio.h>
void fun(int x, int y, int z)
{
    printf("%d %d %d\n",x,y,z);
}
int main()
{
    int i = 2;
    fun(++i,++i,++i);    // i=i+1, i= i+2, i=i+3
    return 0;
}

/* Output
5 5 5 
*/
