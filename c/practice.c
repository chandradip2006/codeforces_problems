#include<stdio.h>
int hcf(int a , int b){
    int f;
    if(a>b){
        for(int i = 1 ; i <= b ; i++){
            if(a % i == 0 && b % i == 0){
                f = i;
            }
            else continue;
        }
    }
    else {
        for(int i = 1 ; i <= a ; i++){
            if(a % i == 0 && b % i == 0){
                f = i;
            }
            else continue;
        }
    }
    return f;
}
int main(){
    int x , y;
    scanf("%d %d" , &x , &y);
    int lcm = (x*y) / hcf(x , y);
    printf("%d" , lcm);
    

}