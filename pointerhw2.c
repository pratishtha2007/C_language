#include<stdio.h>
int main(void){
    int i,arr[5]={25,30,35,40,45},*p;
    p=arr;
    for(i=0; i<5; i++){
        printf("%d",*(p+1));
    }
    return 0;
}