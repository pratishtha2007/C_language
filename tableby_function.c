#include<stdio.h>
#include<conio.h>
int table(int n);
int main(){
    table(4);
    table(12);
}
int table(int n){
    int i;
    for(i=1; i<=10; i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}