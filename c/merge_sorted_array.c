#include<stdio.h>
int main(){
    int m;
    scanf("%d" , &m);
    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d" , &a[i]);
    }
    int n;
    scanf("%d" , &n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &b[i]);
    }
    int z= m+n;
    int arr[z];
    int count=0;
    int i=0,j=0;
    while(z>0){
        if(!(i==m||j==n)){
            if(a[i]>=b[j]){
                arr[count]=b[j];
                count++;
                j++;
            }
            else{
                arr[count]=a[i];
                count++;
                i++;
            }
        }
        else{
            if(i==m){
                while(j<n){
                    arr[count]=b[j];
                    count++;
                    j++;
                }
            }
            else{
                while(i<m){
                    arr[count]=a[i];
                    count++;
                    i++;
                }
            }
        }
        z--;
    }
    if((m+n)%2==0){
        printf("%.1f",(float)(arr[(m+n)/2-1]+arr[(m+n)/2])/2);
    }
    else printf("%.1f" , (float)arr[(m+n)/2]);
}