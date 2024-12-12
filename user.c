#include<stdio.h>
int main(){
    int num;
    printf("Enter your number");
    scanf("%d",&num);
    if(num%2==0)
    printf("This is a even number%d",num);
    return 0;
}