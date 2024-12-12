
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first side of triangle:");
    scanf("%d",&a);
    printf("Enter the second side of triangle:");
    scanf("%d",&b);
    printf("Enter the third side of triangle:");
    scanf("%d",&c);
    if(a!=b && b!=c){
        printf("This is scalene triangle");
    }
    else if(a==b && b!=c){
        printf("This is isosceles triangle");
    }
    else if(a==b && b==c){
        printf("This is equilateral triangle");
    }
    else{
        printf("No");
    }
    return 0;
}