//  sum of even digits of a number
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    int z = n;
    int r ;
    int k = 0;
    while(z != 0){
        int r = (z % 10);
        if (r % 2 == 0){
            k += r;
        }
        z = z / 10;
    }
    printf("the sum of even digits is : %d" , k);

    return 0;
}