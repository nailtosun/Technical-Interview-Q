#include <stdio.h>
void swap();
int main()
{
    char *a = "foo";
    char *b = "bar";
    swap(&a,&b);            //Giving addresses to function
    printf("a that main returned %s\n",a);
    printf("b that main returned %s",b);
    return 0;
}
void swap(int *x,int *y)    //Function takes addresses
{
    int tmp = *x;           //swapping adresses
    *x = *y;
    *y = tmp;
}
