#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    printf("----------------ROCK_PAPER_SCISSORS------------------\n");
    srand(time(0));
    int a = rand() % 3 , b;
    char ch;
    printf("Your turn: ");
    cin>>ch;
    if(ch=='R'){
        b=0;
    }
    else if(ch=='P'){
        b=1;
    }
    else if(ch=='S'){
        b=2;
    }
    while(b==a){
        if(a==0){
            printf("Computer chose Rock\n");
        }
        else if(a==1){
            printf("Computer chose Paper\n");
        }
        else{
            printf("Computer chose Scissors\n");
        }
        cout<<"Your turn: ";
        cin>>ch;
        srand(time(0));
        a = rand() % 3;
        if(ch=='R'){
            b=0;
        }
        else if(ch=='P'){
            b=1;
        }
        else if(ch=='S'){
            b=2;
        }
    }
    if(a==0&&b==1){
        printf("Computer chose Rock\n");
        printf("Paper covers Rock, you win!\n");
        printf("-------------CONGRATULATIONS----------------");
    }
    else if(a==0&&b==2){
        printf("Computer chose Rock\n");
        printf("Rock crushes Scissors, you lose!\n");
        printf("-------------GAME OVER----------------");
    }
    else if(a==1&&b==0){
        printf("Computer chose Paper\n");
        printf("Rock crushes Paper, you lose!\n");
        printf("-------------GAME OVER----------------");
    }
    else if(a==1&&b==2){
        printf("Computer chose Paper\n");
        printf("Scissors cuts Paper, you win!\n");
        printf("-------------CONGRATULATIONS----------------");
    }
    else if(a==2&&b==1){
        printf("Computer chose Scissors\n");
        printf("Paper covers Scissors, you lose!\n");
        printf("-------------GAME OVER----------------");
    }
    else if(a==2&&b==0){
        printf("Computer chose Scissors\n");
        printf("Rock crushes Scissors, you win!\n");
        printf("-------------CONGRATULATIONS----------------");
    }
}