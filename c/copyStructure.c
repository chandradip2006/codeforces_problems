#include<stdio.h>
int main(){
    typedef struct student{
        int rno;
        float percent;
        char grade;
    }student;
    student s1 = {76 , 70.7 , 'B'};
    student s2 = s1;   // deep copy
    printf("%c\n" , s1.grade);
    printf("%c\n" , s2.grade);
    s1.grade = 'A';
    printf("%c\n" , s1.grade);
    printf("%c\n" , s2.grade);


    return 0;
}