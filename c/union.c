#include<stdio.h>
typedef union student{          // union structure takes only one variable/attribute at a time
    int rno;
    float percent;
    char grade;
}student;
int main(){
    student s1 ;
    s1.percent = 97.3;
    // printf("%c\n" , s1.grade);
    printf("%f\n" , s1.percent);
    // printf("%d\n" , s1.rno);
    return 0;
}