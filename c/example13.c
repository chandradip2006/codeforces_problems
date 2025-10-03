// reversing a number
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    int z = n / 10;
    int r = n % 10;
    while(z != 0){
        r = r * 10;
        int ld = z % 10;
        r += ld;
        z = z / 10;
    }
    printf("the reverse of the number is : %d" , r);

    return 0;
}