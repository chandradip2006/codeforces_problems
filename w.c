#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    if(n<0){
        int z1=n , z2=n;
        while(z1<0){
            if(n%z1==0){
                printf("%d %d\n", z1 , n/z1);
            }
            z1++;
        }
        while(z2<0){
            if(n%z2==0){
                printf("%d %d\n", n/z2 , z2);
            }
            z2++;
        }
    }
    else if(n==0){
        printf("0 0");
    }
    else{
        int z1=n , z2=n;
        while(z1>0){
            if(n%z1==0){
                printf("%d %d\n",(-1)*z1 , (-1)*n/z1);
            }
            z1--;
        }
        while(z2>0){
            if(n%z2==0){
                printf("%d %d\n", n/z2 , z2);
            }
            z2--;
        }
    }
  return 0;
}