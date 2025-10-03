#include<stdio.h>
typedef struct student{          // global structure , user defined data type
    int rno;
    float percent;
    char grade;
}student;
void print(student s){    // structure pass by value
    printf("%d\n" , s.rno);
    printf("%f\n" , s.percent);
    printf("%c\n" , s.grade);
}
void change(student s){
    s.grade = 'A';
}
int main(){
    student s1 = {76 , 70.7 , 'B'};
    print(s1);
    printf("%c\n" , s1.grade);
    change(s1);
    printf("%c\n" , s1.grade);
    return 0;
}