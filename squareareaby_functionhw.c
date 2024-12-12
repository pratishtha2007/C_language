#include<stdio.h>
#include<conio.h>
int sqarea(int a);
int triarea(int b,int h);
int main(){
    int n,a,c;
    printf("Enter the number for area of square:");
    scanf("%d",&n);
    sqarea(n);
    printf("Base of the triangle:");
    scanf("%d",&a);
    triarea()
}
int sqarea(int a){
    int res;
    res=a*a;
    printf("%d",res);
    return 0;
}