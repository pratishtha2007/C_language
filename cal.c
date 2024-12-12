#include<stdio.h>
int main(){
    int a=2, b=5, c=10;
    c= ++a+b*c-2/2+b;
    printf("This is a value%d",c);
    return 0;
}