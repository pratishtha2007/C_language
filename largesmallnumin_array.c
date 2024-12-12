#include<stdio.h>
int main(){
    int arr[5],i,large,small;
    for(i=0; i<5; i++){
        printf("Enter number%d:",i+1);
        scanf("%d",&arr[i]);
    }
    small=large=arr[0];
    for(i=0; i<5; i++){
        if(small<arr[i])
        small=arr[i];
        if(large>arr[i])
        large=arr[i];
    }
    printf("This is resultlargest =%d \n smallest =%d",small, large);
    return 0;
}