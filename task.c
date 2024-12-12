#include<stdio.h>
int main(){
    int a=10, b=20, c;
    c= a+++--b+--a+a++;
    printf("This value is %d",c);
    return 0;
}