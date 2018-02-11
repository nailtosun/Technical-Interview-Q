#include <stdio.h>
void swap();
int main()
{
    int a = 1;
    int b = 2;
    swap(&a,&b);            //Giving addresses to function
    printf("a that main returned %d\n",a);
    printf("b that main returned %d",b);
    return 0;
}
void swap(int *x,int *y)    //Function takes addresses
{
    int tmp = *x;           //swapping adresses
    *x = *y;
    *y = tmp;
}
