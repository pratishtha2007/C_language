#include<stdio.h>
int main(){
    int a=10;
    int x=++a;
    int b=20;
    int y=b++;
     y=b++;
    int c=13, d;
    int e=14, f;
    printf("The value of x is %d\n",x);
    printf("The value of a is %d\n",a);
    printf("The value of y id %d\n",y);
    printf("The value of b is %d\n", b);
    printf("The value is %d\n",d=++c);
    printf("The value is %d",f=++e);
    return 0;
}