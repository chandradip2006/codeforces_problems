// student's roll no and marks
#include<stdio.h>
int main(){
    int r;
    printf("enter the no of students: ");
    scanf("%d" , &r);
    int arr[r][2];
    for (int i = 0 ; i < r ; i++){
        int roll;
        printf("enter the roll no of student%d: " , i + 1);
        scanf("%d" , &roll);
        int marks;
        printf("enter the marks of student%d: " , i + 1);
        scanf("%d" , &marks);
        arr[i][0] = roll;
        arr[i][1] = marks;

    }
    printf("roll no   marks\n");
    for (int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("  %d     " , arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}