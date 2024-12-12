#define row 2
#define col 2
#include<stdio.h>

int main(){
    int i,j,arr[row][col],arr1[row][col],arr2[row][col];

    printf("Enter first matrix:[%d][%d]\n",row,col);
    for(i=0; i<row; i++){
           for(j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
           
           } 
            }
    printf("Enter second matrix:[%d][%d]\n",row,col);        
    for (i=0; i<row; i++){
          for(j=0; j<col; j++){
            scanf("%d ",&arr1[i][j]);  
         
          }  
    }
    for (i=0; i<row; i++){
          for(j=0; j<col; j++){
            arr2[i][j]=arr[i][j]+arr1[i][j];  
          }  
    }
     printf("this matrix addition result is\n:");
     for (i=0; i<row; i++){
          for(j=0; j<col; j++){
            printf("%5d \t",arr2[i][j]); 
            
          } 
          printf("\n");  
    }
    printf("\n");
    return 0;
}