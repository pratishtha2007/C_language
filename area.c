#include<stdio.h>
int main(){
    int B,H,A=0;
    printf("Enter your first number=");
    scanf("%d",&B);
    printf("Enter your second number=");
    scanf("%d",&H);
    A=B*H;
    int div=0;
    div = A/2;
    printf("This is result of area%d",div);
    return 0;
}