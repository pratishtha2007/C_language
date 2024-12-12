#include<stdio.h>
 int main(){
    int i, arr[2],sum=0, sub=0, mul=0, div=0;
    for(i=0; i<2; i++){
        printf("Enter your number:");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<2; i++){
       printf("%d\n",arr[i]);
        sum+=arr[i];
        sub=sub-arr[i];
        mul=mul*arr[i];
        div=div/arr[i];
    }
    printf("Sum value is:%d\n",sum);
    printf("Subtract value is:%d\n",sub);
    printf("Multiply value is:%d\n",mul);
    printf("Divide value is:%d\n",div);
    return 0;
 }