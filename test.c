#include <stdio.h>
int add();
int main()
{
    printf("Hello World,Welcome to C-Programming\n");
    printf("low level Programming");
    add();
    return (0);
}

int add()
{
    int p = 65;
    int d = 78;
    int result = p + d;
    printf("%d\n",result);
}


