#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    i=0;
    while(i<=n){
        printf("%d",i);
        i++;
    }
    return 0;
}