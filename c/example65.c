// palindrome or not
#include<stdio.h>
#include<stdbool.h>
 int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d" , &n);
    int arr1[n];
    for (int i = 0 ; i < n ; i++){
        int r;
        printf("enter the number%d: " , i + 1);
        scanf("%d" , &r);
        arr1[i] = r;
    }
    int arr2[n];
    for (int j = 0 ; j < n ; j++){
        arr2[j] = arr1[n - j - 1];
    }
    bool flag = false;
    for (int i = 0 ; i < n ; i++){
        if (arr1[i] == arr2[i]){
            flag = true;
            continue;
        }
        else {
            flag = false;
            break;
        }
    }
    if (flag == true) printf("this is a palindrome array");
    else printf("this is not a palindrome array");
    return 0;
}