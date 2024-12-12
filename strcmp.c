#include<stdio.h>
#include<string.h>
int main(){
    char str1[20], str2[30];
    printf("Enter two  string=");
    gets(str1);
    gets(str2);
    if(strcmp(str1,str2)==0){
        printf("This is a match statement");
    }
    else{
        printf("Not matched");
    }
    return 0;
}