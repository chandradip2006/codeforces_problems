#include<stdio.h>
#include<stdbool.h>
int main(){
    int n1;
    printf("enter the size of the greed: ");
    scanf("%d" , &n1);
    int g[n1];
    printf("greed= ");
    for(int i = 0 ; i < n1 ; i++){
        scanf("%d" , &g[i]);
    }
    int n2;
    printf("enter the no of element of the size: ");
    scanf("%d" , &n2);
    int s[n2];
    printf("size= ");
    for(int i = 0 ; i < n2 ; i++){
        scanf("%d" , &s[i]);
    }
    for(int i = 0 ; i < n1-1; i++){
        if(g[i] > g[i+1]){
            int temp = g[i];
            g[i] = g[i+1];
            g[i+1] = temp;
        }
    }
    for(int j = 0 ; j < n2-1; j++){
        if(s[j] > s[j+1]){
            int temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }
    }
    int z1 = 0;
    int count = 0;
    for(int i = 0 ; i < n1 ; i++){
        int count1=0;
        bool flag = false;
        for(int j = z1+1 ; j < n2 ; j++){
            if(s[j] >= g[i]){
                count1++;
                flag = true;
            }
        }
        int arr[count1];
        int z =0;
        for(int j = 0 ; j < n2 ; j++){
            if(s[j] >= g[i]){
                arr[z]= j;
                z++;
            }
        }
        z1 = arr[0];
        if(flag == true){
            count++;
        }
    }
    printf("the maximum no of children is: %d" , count);
}