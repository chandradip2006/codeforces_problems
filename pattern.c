#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    if(n%2==0){
        int z=n/2;
        for(int i=0;i<z;i++){
            for(int k=1;k<z-i;k++){
                printf("  ");
            }
            if(i==0){
                printf("*");
            }
            else{
                printf("* ");
                for(int j=1;j<=2*i-1;j++){
                    printf("^ ");
                }
                printf("*");
            }
            printf("\n");
        }
        for(int i=0;i<z;i++){
            for(int k=1;k<=i;k++){
                printf("  ");
            }
            if(i==z-1){
                printf("*");
            }
            else{
                printf("* ");
                for(int j=1;j<=2*(z-i-1)-1;j++){
                    printf("^ ");
                }
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        int z=n/2;
        for(int i=1;i<=z+1;i++){
            for(int j= 1;j<=z+1-i;j++){
                printf("  ");
            }
            if(i==1){
                printf("*");
            }
            else {
                printf("* ");
                for(int k=1;k<=2*(i-1)-1;k++){
                    printf("^ ");
                }
                printf("*");
            }
            printf("\n");
        }
        for(int i=1;i<=z;i++){
            for(int j=1;j<=i;j++){
                printf("  ");
            }
            if(i==z){
                printf("*");
            }
            else{
                printf("* ");
                for(int k=1;k<=2*(z-i)-1;k++){
                    printf("^ ");
                }
                printf("*");
            }
            printf("\n");
        }
    }
	return 0;
}