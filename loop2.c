#include<stdio.h>
int main(){
    int i,n, sum=0;
    printf("Enter a number=");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d",i);
        sum=sum+i;
        i++;
        printf("\n");
    }
    printf("This is sum of the value:%d",sum);
} 