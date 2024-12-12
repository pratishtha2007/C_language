#include<stdio.h>
#include<conio.h>
int main()
{
    int a=20;
    int *b=&a;
    printf("The value of *b:%d\n",*b);
    printf("The value of &a:%d\n",&a);
    printf("The value of &b:%d\n",&b);
    printf("The value of b:%d\n",b);
    printf("The value of a:%d\n",a);
    return 0;
}