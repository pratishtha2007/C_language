#include<stdio.h>
int main(){
    int note,total, choice;
    scanf("%d",&note);
     switch(note){
        case 100:
        total=note/100;
        printf("the total number of 100:%d\n",total);
        note=note%100;
       

        case 50:
        total=note/50;
        printf("the total number of 50:%d\n",total);
        note=note%50;
     

        case 20:
        total=note/20;
        printf("the total number of 10:%d\n",total); 
        break;
        default:
        printf("Invalid Number");
        break;
     }
}