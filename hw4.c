#include<stdio.h>
int main(){
    int a;
    printf("Enter a number=");
    scanf("%d",&a);
    if(a<=0){
        printf("Thid is a negative number");
    }
    else if(a>=0){
        printf("This is a positive number");
    }
    else{
        printf("Invalid");
    }
    return 0;
}