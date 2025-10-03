// search for an element in an array
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {1 , 2 , 4 , 8 , 16 , 12 , 9 , 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("enter a number: ");
    scanf("%d" , &x);
    bool flag = false;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] != x){
            flag = true;
            break;
        }
        else{
            continue;
        }
    }
    if (flag == true){
        printf("%d is present in the array" , x);
    }
    else printf("%d is not present in the array" , x);
    return 0;
}