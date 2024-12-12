#include<stdio.h>
#include<conio.h>
int printarea(float l, float b);
int main(){
    printarea(40.0,60.25);
}
int printarea(float x, float y){
   float a;
    a=x*y;
    printf("%.2f",a);
    return 0;
} 