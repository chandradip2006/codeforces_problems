#include<stdio.h>
int main(){
    // float p ;
    // printf("enter your percentage marks: ");
    // scanf("%f" , &p);
    // if (p > 80 && p <= 100) printf("very good");
    // if (p > 60 && p <= 80) printf("good");
    // if (p > 40 && p <= 60) printf("average");
    // if (p >= 0 && p <= 40) printf("fail");

    // float p ;
    // printf("enter your percentage marks: ");
    // scanf("%f" , &p);
    // if (p > 80 && p <= 100) printf("very good");
    // else if (p > 60 && p <= 80) printf("good");
    // else if (p > 40 && p <= 60) printf("average");
    // else printf("fail");

    float p ;
    printf("enter your percentage marks: ");
    scanf("%f" , &p);
    if (p > 80 && p <= 100) printf("very good");
    else {
        if (p > 60) printf("good");
        else{
            if (p > 40) printf("average");
            else printf("fail");
        }
    }




    return 0;
}