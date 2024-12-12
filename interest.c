#include<stdio.h>
int main (){
    int P,R,T,A=0;
    printf("Enter your first no=");
    scanf("%d",&P);
    printf("Enter your second no=");
    scanf("%d",&R);
    printf("Enter your third no.");
    scanf("%d",&T);
    A=P*R*T;
    printf("This is result%d",A);
    int divide=0;
    divide=  A/100;
    printf("This is value%d",divide);
    return 0;
}