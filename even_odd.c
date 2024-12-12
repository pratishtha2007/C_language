#include<stdio.h>
int main(){
    int a,m,even=0, odd=0;
    printf("Enter your range: ");
    scanf("%d",&m);
    a=0;
    while(a<=m){
        if(a%2==0){
            printf("this is a even: %d\n", a);
            even+=a;
        }else{
            printf("this is a odd : %d\n",a);
            odd+=a;
        }
        a++;

    }
    printf("This is sum of the even number : %d", even); 
    printf("This is sum of the odd number : %d", odd);
    
    return 0;
}