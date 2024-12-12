#include<stdio.h>
int main(){
    int a;
    printf("Enter your number");
    scanf("%d",&a);
    if(a>=18)
    printf("eligible for vote%d",a);
    return 0;
}