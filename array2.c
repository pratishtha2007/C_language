#include<stdio.h>
int main(){
    int i, arr[2],sum=0;
    for(i=1;i<3;i++){
        printf("Enter Your Number:");
        scanf("%d",&arr[i]);
    }
    printf("This is number:");
    for(i=1; i<3; i++){
        
        printf("%d\n",arr[i]);
        sum=sum*arr[i];
    }
    printf("%d",sum);
    return 0;
}