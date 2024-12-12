#include<stdio.h>
int main(){
int i,j,k,n,l,a,b,c,d;
scanf("%d",&n);
  for(i=1; i<=n;i++){
    for(j=5; j>=i; j--){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("*");
    }
    for(l=1; l<=i-1; l++){
        printf("*");
    }
    printf("\n");
  }
  for(a=1; a<=n; a++){
    for(c=2; c<=a; c++){
      printf(" ");
    }
    for(b=5;b>=a;b--){
         printf("*");
    }
   for(d=6; d>=a; d--){
    printf("*");
   }
   
    printf("\n");
  }
}