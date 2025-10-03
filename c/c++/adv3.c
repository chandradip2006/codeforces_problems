#include<stdio.h>
int main(){
    int n;
    printf("enter the no of people: ");
    scanf("%d" , &n);
    int arr[n];
    printf("arr=");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int l;
    int count = 0;
    printf("limit=");
    scanf("%d" ,&l);
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if((arr[i] + arr[j])<= l){
                count++;
            }
        }
    }
    printf("the no of min boats is: %d" , count+(n-(2*count)));

    
}