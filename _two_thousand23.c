#include<stdio.h>
int main(){
    int t;
    scanf("%d" , &t);
    while(t--){
        int n , k;
        scanf("%d %d" , &n , &k);
        long long int p=1;
        while(n--){
            int k;
            scanf("%d" , &k);
            p=p*k;
        }
        if(2023%p==0){
            printf("YES\n");
            for(int i=1;i<=k-1;i++){
                printf("1 ");
            }
            printf("%lld\n" , 2023/p);
        }
        else printf("NO\n");
    }
}