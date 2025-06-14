#include <stdio.h>
void greetMsg()
{   
    char a;
    printf("Hi,\n");
    printf("Welcome to GitHub\n");
    scanf("%s",&a);
}

void exitMsg()
{
   
    printf("Bye\n");
    printf("Visit Again");
}

int main()
{
    greetMsg();
    printf("Hope you are enjoying\n");
    exitMsg();
    return 0;
}


/* Output
Hi,
Welcome to GitHub
Prince yadav
Hope you are enjoying
Bye
Visit Again
*/
