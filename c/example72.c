#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[100];
        float price;
        int page_number;
    }book;
    book b1 ;
    strcpy(b1.name , "cengage math");
    b1.price = 767;
    b1.page_number = 630;
    printf("%s\n" , b1.name);
    printf("%f\n" , b1.price);
    printf("%d\n" , b1.page_number);
    printf("\n");

    book b2 ;
    strcpy(b2.name , "arihant math");
    b2.price = 457;
    b2.page_number = 416;
    printf("%s\n" , b2.name);
    printf("%f\n" , b2.price);
    printf("%d\n" , b2.page_number);


    return 0;
}