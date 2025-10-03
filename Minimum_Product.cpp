#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a , b , x , y;
        int n;
        cin>>a>>b>>x>>y>>n;
        int count = (a-x)+(b-y);
        long long z1=LONG_LONG_MAX , z2=LONG_LONG_MAX , z3=LONG_LONG_MAX ,z4=LONG_LONG_MAX , z5=LONG_LONG_MAX;
        if(n>=count){
            z1=x*y;
        }
        else{
            if(a-x>=n){
                z2=(a-n)*b;
            }
            if(b-y>=n){
                z3=(b-n)*a;
            }
            if(a-x<n){
                z4=(x)*(b-(n-a+x));
            }
            if(b-y<n){
                z5=(y)*(a-(n-b+y));
            }
        }
        cout<<min(min(min(min(z1,z2),z3),z4),z5)<<endl;
    }
}