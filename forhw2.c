#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the number");
    scanf("%d",n);
    for(i=0; i<=n ; i++){
        if(n%5==0){
            printf("This is divisible by 5%d",n);
            sum=sum+n;
            
        }
        else{
            printf("This is not divisible by 5%d",n);
        }
    }
    return 0;
}