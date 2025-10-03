#include<stdio.h>
int main(){
    // char ch ;
    // printf("enter the operator: ");
    // scanf("%c" , &ch);
    // float x;
    // printf("enter 1st number: ");
    // scanf("%f" , &x);
    // float y;
    // printf("enter 2nd number: ");
    // scanf("%f" , &y);
    // // // if else
    // // if (ch == '+') printf("the sum is %f" , x + y);
    // // else if (ch == '-') printf("the difference is %f" , x - y);
    // // else if (ch == '*') printf("the product is %f" , x * y);
    // // else if (ch == '/') printf("the divisin is %f" , x / y);
    // // else printf("invalid operator");

    // // // switch
    // // switch (ch) {
    // //     case '+' :
    // //         printf("the sum is %f" , x + y);
    // //         break;
    // //     case '-' :
    // //         printf("the difference is %f" , x - y);
    // //         break;
    // //     case '*' :
    // //         printf("the product is %f" , x * y);
    // //         break;
    // //     case '/' :
    // //         printf("the division is %f" , x / y);
    // //         break;
    // //     default :
    // //         printf("invalid operator");
    // // }

    char ch ;
    printf("enter the weekday no: ");
    scanf("%c" , &ch);
    switch(ch) {
        case '1':
            printf("monday");
            break;
        case '2':
            printf("tuesday");
            break;
        case '3':
            printf("wednesday");
            break;
        case '4':
            printf("thrusday");
            break;
        case '5':
            printf("friday");
            break;
        case '6':
            printf("saturday");
            break;
        case '7':
            printf("sunday");
            break;
        default:
            printf("invalid day");
        
    }

    return 0;
}