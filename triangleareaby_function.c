#include<stdio.h>
#include<conio.h>
int triarea(int b, int h);
int main(){
     triarea(5,4);
     }
int triarea(int b, int h){
    int area;
    area=b*h/2;
    printf("%d",area);
    return 0;
    }