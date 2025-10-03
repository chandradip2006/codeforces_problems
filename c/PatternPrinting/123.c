#include<stdio.h>
#include<string.h>
int main(){
    int z;
    int r;
    scanf("%d" , &z);
    int n = z;
    int count = 0;
    for(int i = 1 ; i <= n ; i++ ){
        if(z % 10 != 0){
            count++;
            z = z / 10;
        }
        else break;
    }
    printf("the no of digits %d" , count);
    


}
