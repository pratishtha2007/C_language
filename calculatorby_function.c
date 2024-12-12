#include<stdio.h>
#include<conio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int main(){
    add(10,5);
    sub(10,5);
    mul(10,5);
    divide(10,5);
}
int add(int x, int y){
    int res;
    res=x+y;
    printf("Sum result is:%d\n",res);
}
int sub(int c, int d){
    int su;
    su=c-d;
    printf("Subtract result is:%d\n",su);
}
int mul(int e,int f){
    int mu=0;
    mu=e*f;
    printf("multiply result is:%d\n",mu);
}
int divide(int g, int h){
    int div;
    div=g/h;
    printf("divide result is:%d",div);
    return 0;
}
