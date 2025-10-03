#include<stdio.h>
// void print1ToN(int x , int n){
//     if (x > n) return;
//     else {
//         printf("%d\n" , x);
//         print1ToN(x + 1 , n);
//     }
        

// }
// int main(){
//     // int n;
//     // printf("enter a natural number: ");
//     // scanf("%d" , &n);
//     // for (int i = 1 ; i <= n; i++){
//     //     printf("%d\n" , i);
//     // }
//     int n;
//     printf("enter a natural number: ");
//     scanf("%d" , &n);
//     print1ToN(1 , n);
//     return 0;
// }
void print(int x){
    if (x == 0) return;
    else{
        print(x - 1);
        printf("%d\n" , x);
    }
}
int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d" , &n);
    print(n);
    return 0;
}