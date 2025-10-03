// #include<stdio.h>
// #include<math.h>
// int main(){
    // int n;
    // scanf("%d" , &n);
    // int a[n],b[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d" , a+i);
    // }
    // for(int i=0;i<n;i++){
    //     scanf("%d" , b+i);
    // }
    // long long sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+(a[i]-b[i])*(a[i]-b[i]);
    // }
    // double d = sqrt(sum);
    // printf("%.15f" , d);
    #include<stdio.h>
int main(){
    int n ,m , count=0;
    scanf("%d %d" , &n , &m);
    char ch[n][m];
    for(int i=0 ;i<n;i++){
        for(int j=0;j<m ;j++){
            scanf("%c" , &ch[i][j]);
            if(ch[i][j]=='x'){
                count++;
            }
        }
    }
    printf("%d" , count);
}
// }