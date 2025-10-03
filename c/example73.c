#include<stdio.h>
#include<string.h>
int main(){
    typedef struct person{
        char name[100];
        float salary;
        int age;
    }person;
    person p1;
    strcpy(p1.name , "chandradip");
    p1.salary = 1000000;
    p1.age = 21;

    person p2;
    strcpy(p2.name , "raghav");
    p2.salary = 937000;
    p2.age = 23;

    printf("the name of the first person is: %s\n" , p1.name);
    printf("the age of the second person is: %d\n" , p2.age);
    return 0;
}