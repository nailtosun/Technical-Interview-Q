#include <stdio.h>
void swap();
int main()
{
    int a = 1;
    int b = 2;
    swap(a,b);
    printf("a that main returned %d\n",a);
    printf("b that main returned %d",b);
    return 0;
}
void swap(int x,int y) //function receive VALUES of x and y (1)
{
    int tmp = x;
    x = y;
    y = tmp;
    printf("a is %d in the stack\n",x);
    printf("b is %d in the stack\n",y);
    return x;  //even though function return values since after function execution (2)
    return y;  //stack memory closed main function cannot access swapped values. (3)
}
