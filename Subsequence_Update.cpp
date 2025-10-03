#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void swap(int* x , int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , l , r;
        cin>>n>>l>>r;
        int b[r-l+1] ,d[r-l+1] ,a[l-1] ,c[n-r];
        for(int i=0;i<n;i++){
            if(i<=l-2){
                cin>>a[i];
            }
            else if(i>=l-1&&i<=r-1){
                cin>>b[i-l+1];
                d[i-l+1]=b[i-l+1];
            }
            else {
                cin>>c[i-r];
            }
        }
        sort(a,a+sizeof(a)/sizeof(a[0]));
        sort(b,b+sizeof(b)/sizeof(b[0]));
        sort(c,c+sizeof(c)/sizeof(c[0]));
        int z1=sizeof(a)/sizeof(a[0]);
        int z2=sizeof(b)/sizeof(b[0]);
        int z3=sizeof(c)/sizeof(c[0]);
        if(z1>=z2){
            for(int i=0;i<z2;i++){
                if(b[z2-1-i]>=a[i]){
                    swap(&a[i],&b[z2-1-i]);
                }
                else break;
            }
        }
        else {
            for(int i=0;i<z1;i++){
                if(b[z2-1-i]>=a[i]){
                    swap(&a[i],&b[z2-1-i]);
                }
                else break;
            }
        }
        long long int sum1=0,sum2=0;
        for(int i=0;i<z2;i++){
            sum1+=b[i];
        }
        if(z3>=z2){
            for(int i=0;i<z2;i++){
                if(d[z2-1-i]>=c[i]){
                    swap(&c[i],&d[z2-1-i]);
                }
                else break;
            }
        }
        else {
            for(int i=0;i<z3;i++){
                if(d[z2-1-i]>=c[i]){
                    swap(&c[i],&d[z2-1-i]);
                }
                else break;
            }
        }
        for(int i=0;i<z2;i++){
            sum2+=d[i];
        }
        cout<<min(sum1,sum2)<<endl;
    }
}