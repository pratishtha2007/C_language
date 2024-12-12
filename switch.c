#include <stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
        case 1: 
        printf("sunday",day);
        break;
        case 2:
        printf("monday",day);
        break;
        default:
        printf("Invalid day");
        break;
    }
}