#include<stdio.h>
#include<conio.h>
int main(){
    int a=20,b=10,sum=0;
    int *p1=&a;
    int *p2=&b;
    sum=*p1+*p2;
    printf("Sum of the result:%d",sum);
    return 0;
}