#include <stdio.h>

int main() {
    int i, j,k, n;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            
            if (i + j >= n + 1) { 
                printf("*");
            } else {
                printf(" ");
            }
        }
        for(k=1;k<=i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
