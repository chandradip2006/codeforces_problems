#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        while(k>0){
            int z1=a[0] , idx1;
            for(int i=0;i<n;i++){
                if(a[i]<=z1){
                    z1=a[i];
                    idx1=i;
                }
            }
            int z2=b[0] , idx2;
            for(int i=0;i<n;i++){
                if(b[i]>=z2){
                    z2=b[i];
                    idx2=i;
                }
            }
            if(z2>z1){
                swap(&a[idx1],&b[idx2]);
                k--;
            }
            else break;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
        t--;
    }
}