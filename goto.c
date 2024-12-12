#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        goto label1;
        
    }
    else{
        goto label2;
    }
    label1:
    printf("even number"); 
    exit(0);
    label2:
    printf("odd number");
}