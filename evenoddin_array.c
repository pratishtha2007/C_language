#include<stdio.h>
int main(){
    int arr[10],i,odd=0,even=0;
    for(i=0; i<10;i++){
        printf("Enter your number%d:",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
        else 
        odd++;
    }
    printf("this is result%d \n %d",even,odd);
    return 0;
}