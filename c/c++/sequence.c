#include<stdio.h>
int main(){
    int n1,n2;
    char str1[n1];
    char str2[n2];
    for(int i = 0 ; i < n1 ; i++){
        scanf("%c",&str1[i]);
    }
    for(int i = 0 ; i < n2 ; i++){
        scanf("%c",&str2[i]);
    }
    int flag = 0;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            if(str1[i] == str2[j]){
                flag++;
            }
            else continue;
        }
    }
    int arr[n1];
    if(flag == n1){
        for(int i = 0 ; i < n1 ; i++){
            for(int j = 0 ; j < n2 ; j++){
                if(str1[i] == str2[j]){
                    arr[i] = j;
                }
                else continue;
            }
        }
    }
    else {
        printf("false");
    }
    int count = 0;
    for(int i = 0 ; i < n1 ; i++){
        if(arr[i] < arr[i+1]){
            count = 1;
        }
        else {
            count = 0;
            break;
        }
    }
    if(count == 1){
        printf("true");
    }
    else {
        printf("false");
    }

}