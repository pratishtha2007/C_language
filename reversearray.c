#include<stdio.h>
int main(){
    int rev,i,j,arr[5]={2,5,6,7,8};
    for(i=0,j=4; i<j; i++,j--){
            rev=arr[i];
            arr[i]=arr[j];
            arr[j]=rev;
    }
    printf("After reverse array is:");
    for(i=0; i<5; i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}