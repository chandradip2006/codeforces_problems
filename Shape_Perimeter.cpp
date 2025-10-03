#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        int a[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j< 2;j++){
                cin>>a[i][j];
            }
        }
        int r[n+1] , u[n+1];
        r[0]=m,u[0]=m;
        int z= m;
        for(int i=1;i<=n;i++){
            z=z+a[i-1][0];
            r[i]=z;
        }
        for(int i=1;i<=n;i++){
            m=m+a[i-1][1];
            u[i]=m;
        }
        int z1=r[0], z2=u[0];
        for(int i=1;i<=n;i++){
            if(r[i]>z1){
                z1=r[i];
            }
            if(u[i]>z2){
                z2=u[i];
            }
        }
        int p=2*((z1-a[0][0])+(z2-a[0][1]));
        cout<<p<<endl;
    }
}