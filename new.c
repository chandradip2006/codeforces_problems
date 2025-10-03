#include<stdio.h>
int main(){
    int a , z , z1;
    scanf("%d" , &a);
    int i=1;
    if(a>0){
        z=a;
        z1=z;
    }
    else {
        z=(-1)*a;
        z1=z;
    }
    while(z>0){
        z=z-i;
        i++;
    }
    if(z==0){
        printf("%d", i-1);
    }
    else{
        int n1=i-1;
        int n2=i-2;
        int sum1= (n1*(n1+1))/2;
        int sum2=(n2*(n2+1))/2;
        int d1 = sum1-z1;
        int d2=z1-sum2;
        if(d1>=d2){
            printf("%d" , n2+2*d2);
        }
        else printf("%d" , n1+2*d1);
    }
}