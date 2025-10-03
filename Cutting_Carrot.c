#include<stdio.h>
#include<math.h>
int main(){
    int n,h;
    scanf("%d %d" , &n , &h);
    float h1=h/sqrt(n);
    for(int i=1;i<n;i++){
        printf("%.12f ",h1*sqrt(i));
    }
}