#include<stdio.h>
#include<math.h>
int factorial(int x){
    int z = 1;
    for(int i = 1 ; i <= x ; i++){
        z = z*i;
    }
    return z;
}
int main(){
    int n;
    scanf("%d" , &n);
    printf("1\n");
    for(int i = 1 ; i < n; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("%d " , factorial(i)/(factorial(j)*factorial(i-j)));
        }
        printf("\n");
    }
    printf("\n");
    for(int i = n-1 ; i >= 1; i--){
        for(int j = 0 ; j <= i ; j++){
            printf("%c " , (factorial(i)/(factorial(j)*factorial(i-j)))+64);
        }
        printf("\n");
    }
    printf("A");

}