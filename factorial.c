#include<stdio.h>
int main(){
    int fact=1, i, n;
    printf("Enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        fact=fact*i;
        i++;
     printf("%d\n",fact);
    }
    
   

}