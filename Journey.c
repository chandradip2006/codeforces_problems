#include<stdio.h>
int main(){
    int t;
    scanf("%d" , &t);
    while(t--){
        int n , a , b , c;
        scanf("%d %d %d %d" , &n , &a , &b , &c);
        int sum=a+b+c;
        int z=n/sum;
        int r= n%sum;
        if(r==0){
            printf("%d\n" , z*3);
        }
        else{
            if(a>=r){
                printf("%d\n" , z*3+1);
            }
            else if((a+b)>=r) {
                printf("%d\n" , z*3+2);
            }
            else printf("%d\n", z*3+3);
        }
    }
}