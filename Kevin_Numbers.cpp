#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m , count=0;
        int a[n] , b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        int c[n];
        sort(a , a+n);
        sort(b , b+m);
        for(int i=0;i< n-1;i++){
            if((a[i+1]-a[i])<=1&&(n-count)>m){
                c[count]=a[i+1]+a[i];
                count++;
            }
            else {
                c[count]=a[i];
                count++;
                c[count]=a[i+1];
                count++;
            }
        }
        sort(c , c+count);
        bool flag = true;
        for(int i=0;i<count;i++){
            if(c[i]!=b[i]){
                flag=
            }
        }
    }
}