#include<stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    int count=0;
    while(a!=-1){
        count++;
        scanf("%d" , &a);
    }
    int z = count/2;
    if(z==2){
        printf("straight");
    }
    else if(z==3){
        printf("triangle");
    }
    else if(z==4){
        printf("quadrilateral");
    }
    else if(z==5){
        printf("pentagon");
    }
}