#include<stdio.h>
int main (){
    // float x;
    // printf("enter the age of ram: ");
    // scanf("%f" , &x);
    // float y;
    // printf("enter the age of shyam: ");
    // scanf("%f" , &y);
    // float z;
    // printf("enter the age of ajay: ");
    // scanf("%f" , &z);
    // if (x < y && x < z) printf("ram is the youngest of the three");
    // if (y < x && y < z) printf("shyam is the youngest of the three");
    // if (z < y && z < x) printf("ajay is the youngest of the three");

    // OR
    // using nested if-else
    float x;
    printf("enter the age of ram: ");
    scanf("%f" , &x);
    float y;
    printf("enter the age of shyam: ");
    scanf("%f" , &y);
    float z;
    printf("enter the age of ajay: ");
    scanf("%f" , &z);
    if (x < y){
        if (x < z) printf("ram is the youngest of the three");
        else printf("ajay is the youngest of the three");
    }
    else {
        if (y < z) printf("shyam is the youngest of the three");
        else printf("ajay is the youngest of the three");
    }

    return 0;
}