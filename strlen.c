#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter any sentence here :");
    gets (str);
    float len=strlen(str);
    printf("%.0f",len);
    getch();
}