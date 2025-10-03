#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int r=rand()%10+1;
    int count =0;
    int n;
    printf("Guess the number: ");
    scanf("%d" , &n);
    while(n!=r&&count<10){
        count++;
        printf("wrong guess\tremaining attempts:%d\n" , 10-count);
        printf("Guess the number: ");
        scanf("%d" , &n);
    }
    if(count==10){
        printf("Game Over\n");
        printf("the actual number was: %d" , r);
    }
    else {
        printf("Congratulations you won\n");
    }
}