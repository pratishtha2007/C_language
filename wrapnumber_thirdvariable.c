#include<stdio.h>
int main(){
    int wrap,a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    
    wrap=a;
    a=b;
    b=wrap;
    printf("reverse value of b:%d",b);
}