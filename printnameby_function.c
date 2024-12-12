#include<stdio.h>
#include<conio.h>
void printname();
int main(){
    printname();

    return 0;
}
void printname (){
    char name[30];
    scanf("%s",&name);
    printf("My name is:%s", name);
getch();
} 