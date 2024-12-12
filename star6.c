#include<stdio.h>
int main(){
    int i,j,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
            printf("*");
        }
        printf("\n");
    }
} 