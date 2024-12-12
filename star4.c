#include<stdio.h>
int main(){
    int i,j;
    for(i=97;i<=104; i++)
    {
       for(j=97;j<=i; j++){
        printf("%c",j);
       }
       printf("\n");
    }
}