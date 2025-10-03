#include<stdio.h>
int main(){
    int t;
    scanf("%d" , &t);
    while(t--){
        int n , k;
        scanf("%d %d" , &n , &k);
        int a[n];
        for(int i = 0 ; i < n ; i++){
            scanf("%d" , &a[i]);
        }
        if(k>1){
            printf("YES\n");
        }
        else{
            int flag=1;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                printf("YES\n");
            }
            else printf("NO\n");
        }
    }
}