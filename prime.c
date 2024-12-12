#include<stdio.h>
int main(){
   int num,i,count=0;
   printf("Enter a number:");
   scanf("%d",&num);//14
   for(i=2 ; i<=num-1 ; i++)
   {
         if (num%i==0)
         {
            count++;
         }
         
   }
   if(count==0)
   {
     printf("prime number");
   }
     else
       printf("not prime");

        printf("%d", count);
   return 0;
}