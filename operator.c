#include<stdio.h>
#include<conio.h>
  int main(){
    int a= 30, b=20, sum=0, sub=0,multiply=0, divide=0, rem=0;
    sum = a+b;
    sub = a-b;
    multiply = a*b;
    divide = a/b;
    rem = a%b;
    printf("This is sum result:%d",sum);
    printf("This is sub result:%d",sub);
    printf("This is multiply result:%d",multiply);
    printf("This is division value:%d",divide);
    printf("This is remainder result:%d",rem);
    return 0;
  }