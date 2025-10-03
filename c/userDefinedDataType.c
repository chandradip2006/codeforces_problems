#include<stdio.h>
int main(){
    struct student{
        int rno;
        float percent;
        char grade;
    };
    struct student raghav;  //declaration
    raghav.rno = 88;
    raghav.grade = 'A';
    raghav.percent = 95.4;
    printf("%d\n" , raghav.rno);
    printf("%f\n" , raghav.percent);
    printf("%c\n" , raghav.grade);
    printf("\n");

    struct student urvi = {19 , 72.3 ,'B'};
    printf("%d\n" , urvi.rno);
    printf("%f\n" , urvi.percent);
    printf("%c\n" , urvi.grade);
    
    return 0;
}