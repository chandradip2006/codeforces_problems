#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int z;
    for(int i = n; i >= n ; i++){
        if(i % 10 == 0){
            z = i;
            break;
        }
        else continue;
    }
    int r ;
    scanf("%d" , &r);
    int ld;
    int a = 0;
    for(int i = 1 ; i <= 6 ; i++){
        ld = r % 10;
        ld = ld - n;
        if(ld < 0){
            ld = ld + z;
        }
        else continue;
        a = a*10 + ld;
        r = r / 10;
    }
    int p = 0;
    int ld1;
    for(int i = 1 ; i <= n ; i++){
        ld1 = a % 10;
        p = p*10 +ld1;
        a = a / 10;
    }
    printf("%d" , p);

}
// ---------------error-------------