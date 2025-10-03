#include<stdio.h>
typedef struct student{          // global structure , user defined data type
    int rno;
    float percent;
    char grade;
}student;
void change(student* s){   //pointers pass by reference
    // (*s).grade = 'A';
    s->grade = 'A';
    (*s).rno = 100;
    s->percent = 99;

}
int main(){
    student s1 = {76 , 70.7 , 'B'};
    printf("%c\n" , s1.grade);
    printf("%d\n" , s1.rno);
    printf("%f\n" , s1.percent);
    change(&s1);
    printf("%c\n" , s1.grade);
    printf("%d\n" , s1.rno);
    printf("%f\n" , s1.percent);
    return 0;
}