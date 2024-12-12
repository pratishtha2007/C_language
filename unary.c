#include<stdio.h>
int main(){
    int a=10, b;
    int c=10, d;
    int e=12, f;
    int g=12, h;
    int i=10;
    int j=10;
    printf("this is value%d\n",b=++a);
    printf("this is value%d\n",b=a++);
    printf("this is value%d\n",f=--e);
    printf("this is value%d\n",h=g--);
    printf("this is value%d",++i);
    printf("this is value%d",j++);
    return 0;
}