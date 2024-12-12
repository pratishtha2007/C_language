#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n; i++){
        if(n%2==0){
            continue;
             printf("even is: %d\n",n);
        }
        else{
             printf("odd is :%d\n",n);
        }
       
    }
}