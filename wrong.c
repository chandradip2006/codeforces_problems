#include <stdio.h>

int main(){
    int n ;
    scanf("%d" , &n);
    char x , y;
    scanf("%c" , &x);
    int z1 =0, z2=0;
    while(x!='*'){
        int count=n-1;
        while(count>0){
            scanf("%c" , &y);
            if((x=='+'&&y=='-')||(x=='-'&&y=='+')){
                z1=1;
            }
            else if(y!='+'&&y!='-'&&y!='.'){
                z2=1;
            }
            x=y;
            count--;
        }
        scanf("%c" , &x);
    }
    if(z2==1){
        printf("INVALID");
    }
    else {
        if(z1==1){
            printf("SHORT CIRCUIT");  
        }
        else printf("OKAY");
    }
  return 0;
}